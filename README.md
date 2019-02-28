# PK_LAB_RTTI

LISTA ZADAŃ DO WYKONANIA NA LABORATORIUM:

<p align = "justify">1. Zadeklarować następującą hierarchię klas: klasa polimorficzna Artist (posiadająca metodę wirtualną <b>virtual&nbspvoid&nbspbeCreative())</b>, klasa <b>Musician</b> publicznie dziedzicząca po klasie <b>Artist</b> oraz klasa <b>Pianist</b> publicznie dziedzicząca po klasie <b>Musician</b>. Klasy nie muszą zawierać żadnych składowych. Następnie stworzyć 3 wskaźniki typu <b>Artist</b> i przypisać im adres nowych obiektów - kolejno typu <b>Artist, Musician, Pianist</b>. Następnie wymyślić trzy testowe przypadki rzutowania (analogicznie do przykładu 2) wykorzystując operator <b>dynamic_cast</b>. W przypadkach testowych uwzględnić zarówno z reguły poprawny, jak i niepoprawny sposób rzutowania. Sprawdzić wynik działania programu (przykładowo wyświetlając na ekran wynik rzutowania). </p>

<p align = "justify">2.1. Zaimplementować następującą hierarchię klas: klasę <b>Coach</b> oraz dziedziczące po niej publicznie klasy <b>BaseballCoach</b>, <b>GymCoach</b> i <b>SwimmingCoach</b>. W klasie <b>Coach</b> zadeklarować czysto wirtualną metodę <b>virtual void getDailyTraining()</b> oraz zdefiniować ją dla poszczególnych klas potomnych. Metoda ta powinna wyświetlać na ekran polecenia wydawane przez trenerów - charakterystyczne dla dziedziny sportu, którą dany trener się zajmuje (np. "Podnieś ciężary" w przypadku trenera <b>GymCoach</b>, itp.). Następnie napisać funkcję <b>void performTraining</b> przyjumującą jako argument wskaźnik na obiekt typu Coach i wywołującą funkcję <b>getDailyTraining</b> na jego rzecz. Przetestować działanie tej funkcji dla różnych typów trenerów. 
</p>

<p align = "justify">2.2. Dla utworzonych w poprzednim zadaniu klas zdefiniować następujące metody:
  <p>- <b>void getSaturdayTraining()</b> - dla klasy <b>BaseballCoach</b>, </p>
  <p>- <b>void getSundayTraining()</b> - dla klasy <b>GymCoach</b>,</p>
  <p>- <b>void getWednesdayTraining()</b> - dla klasy <b>SwimmingCoach</b>.</p>
  
<p align = "justify">Powyższe metody powinny wyświetlać na ekran polecenia trenera wyjątkowe dla danego dnia tygodnia występującego w nazwie metody (np. "Dziś jest niedziela. Zjedz stejki!" dla klasy <b>GymCoach</b>). Następnie napisać metodę <b>void&nbspperformDailyTraining</b> przyjmującą jako argumenty wskaźnik na obiekt typu <b>Coach</b> oraz zmienną typu wyliczeniowego przyjmującą wartość reprezentującą dany dzień tygodnia.
W zależności od dnia, wykonać na rzecz argumentu typu <b>Coach</b> funkcję przewidzianą na ten dzień. Jeżeli przekazany przez argument dzień tygodnia nie jest dniem szczególnym dla danego typu trenera, należy wykonać na jego rzecz funkcję <b>getDailyTraining</b>. Przetestować działanie tej funkcji dla różnych typów trenerów. </p>
