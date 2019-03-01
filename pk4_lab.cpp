#include "pch.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>


class Animal {

public:
	virtual void whatAnimal() const = 0;
	virtual ~Animal() {}
};

class Cat : public Animal {
public:
	virtual void whatAnimal() const { std::cout << "Cat" << '\n'; }
};

class Dog : public Animal {
public:
	virtual void whatAnimal() const { std::cout << "Dog" << '\n'; }
};

Animal* randomAnimal() {
	switch (rand() % 2) {
	case 0:
		return new Cat();
	case 1:
		return new Dog();
	}
	return nullptr;
}

std::vector<Animal*> randomAnimals(int num) {
	std::vector<Animal*> vec;
	for (int i = 0; i < num; i++) {
		vec.push_back(randomAnimal());
	}
	return vec;
}

std::vector<Cat*> getCats(const std::vector<Animal*>&all) {
	std::vector<Cat*> vec;
	for (int i = 0; i < all.size(); i++) {
		std::cout << typeid(*(all[i])).name() << '\n';
		if (typeid(Cat) == typeid(*(all[i]))) {
			vec.push_back(static_cast<Cat*>(all[i]));
		}
	}
	return vec;
}

int main() {

	std::vector<Animal*>all = randomAnimals(10);

	std::vector<Cat*>cats = getCats(all);

	for (int i = 0; i < cats.size(); i++) {
		cats[i]->whatAnimal();
	}

	for (int i = 0; i < all.size(); i++) {
		delete all[i];
	}

	return 0;
}