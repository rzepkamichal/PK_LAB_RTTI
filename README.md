# PK_LAB_RTTI

LISTA ZADAŃ DO WYKONANIA NA LABORATORIUM:
<p align = "justify">1. Stwórz następujące klasy:
<b>Animal</b> - zawierającą czysto wirtualną metodę <b>whatAnimal()</b> służącą do wypisywania informacji o zwierząciu. Należy pamiętać o destruktorze.
<b>Cat</b> - dziedzicząca publicznie po klasie <b>Animal</b>. Wypisuje ona informację o nazwie zwierzęcia ("Cat") przy użyciu metody <b>whatAnimal</b>;  
<b>Dog</b> - dziedzicząca publicznie po klasie <b>Animal</b>. Wypisuje ona informację o nazwie zwierzęcia ("Dog") przy użyciu metody <b>whatAnimal</b>. Stworzyć obiekty typu <b>Dog</b> i <b>Cat</b> oraz przetestować na nich działanie operatora <b>typeid(<wsk_na_obiekt>).name().</b></p>
  
<p align = "justify">1.1. Stworzyć klasę <b>RandomAnimals</b> posiadająca dwie składowe - wektor obiektów typu <b>Animal</b> oraz wektor obiektów typu <b>Cat</b>. W klasie zdefiniować również funkcję <b>insertRandomAnimals</b> dodającą otrzymaną jako argument liczbę nowych obiektów do wektora typu <b>Animal</b>. Typ nowo dodawanego elementu powinien być każdorazowo wybierany w sposób losowy (typ <b>Cat</b> albo <b>Dog</b>). Ponadto, jeżeli dodawany obiekt jest typu <b>Cat</b>, powinien on być również dodawany do wektora typu <b>Cat</b>. W implementacji wykorzystać operator <b>typeid</b>.</p>

<p align = "justify">1.2. Wewnątrz klasy <b>RandomAnimals</b> stworzyć funkcję <b>getCats</b>, która zwraca przez referencję wektor obiektów typu <b>Cat</b> będący składową klasy. W metodzie <b>main</b> stworzyć obiekt typu <b>RandomAnimals</b> i przetestować funkcję <b>insertRandomAnimals</b>. Pobrać z obiektu wektor typu <b>Cat</b>, wyświetlić jego rozmiar (tzn. sprawdzić liczbę wylosowanych obiektów typu <b>Cat</b>) i na rzecz każdego jego elementu wywołać metodę <b>whatAnimal()</b>.</p>

<p align = "justify">2. Zadeklarować następującą hierarchię klas: klasa polimorficzna <b>Artist</b> (posiadająca pustą metodę wirtualną <b>virtual&nbspvoid&nbspbeCreative()</b>), klasa <b>Musician</b> publicznie dziedzicząca po klasie <b>Artist</b> oraz klasa <b>Pianist</b> publicznie dziedzicząca po klasie <b>Musician</b>. Następnie stworzyć 3 wskaźniki typu <b>Artist</b> i przypisać im adres nowych obiektów - kolejno typu <b>Artist, Musician, Pianist</b>. Następnie wymyślić trzy testowe przypadki rzutowania (analogicznie do przykładu 2 z prezentacji) wykorzystując operator <b>dynamic_cast</b>. W przypadkach testowych uwzględnić zarówno z reguły poprawny, jak i niepoprawny sposób rzutowania. Sprawdzić wynik działania programu (przykładowo wyświetlając na ekran wynik rzutowania). </p>

<p align = "justify">3.1. Zaimplementować następującą hierarchię klas: klasę <b>Coach</b> oraz dziedziczące po niej publicznie klasy <b>BaseballCoach</b>, <b>GymCoach</b> i <b>SwimmingCoach</b>. W klasie <b>Coach</b> zadeklarować czysto wirtualną metodę <b>virtual void getDailyTraining()</b> oraz zdefiniować ją dla poszczególnych klas potomnych. Metoda ta powinna wyświetlać na ekran polecenia wydawane przez trenerów - charakterystyczne dla dziedziny sportu, którą dany trener się zajmuje (np. "Podnieś ciężary" w przypadku trenera <b>GymCoach</b>, itp.). Następnie napisać funkcję <b>void performTraining</b> przyjumującą jako argument wskaźnik na obiekt typu <b>Coach</b> i wywołującą funkcję <b>getDailyTraining</b> na jego rzecz. Przetestować działanie tej funkcji dla różnych typów trenerów. 
</p>

<p align = "justify">3.2. Dla utworzonych w poprzednim zadaniu klas zdefiniować następujące metody:
  <p>- <b>void getSaturdayTraining()</b> - dla klasy <b>BaseballCoach</b>, </p>
  <p>- <b>void getSundayTraining()</b> - dla klasy <b>GymCoach</b>,</p>
  <p>- <b>void getWednesdayTraining()</b> - dla klasy <b>SwimmingCoach</b>.</p>
  
<p align = "justify">Powyższe metody powinny wyświetlać na ekran polecenia trenera wyjątkowe dla danego dnia tygodnia występującego w nazwie metody (np. "Dziś jest niedziela. Zjedz stejki!" dla klasy <b>GymCoach</b>). Następnie napisać metodę <b>void&nbspperformDailyTraining</b> przyjmującą jako argumenty wskaźnik na obiekt typu <b>Coach</b> oraz zmienną typu wyliczeniowego przyjmującą wartość reprezentującą dany dzień tygodnia.
W zależności od dnia, wykonać na rzecz argumentu typu <b>Coach</b> funkcję przewidzianą na ten dzień. Jeżeli przekazany przez argument dzień tygodnia nie jest dniem szczególnym dla danego typu trenera, należy wykonać na jego rzecz funkcję <b>getDailyTraining</b>. Przetestować działanie tej funkcji dla różnych typów trenerów. </p>
