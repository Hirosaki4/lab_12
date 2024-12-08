#include <iostream>
#include <string>
#include <windows.h> // Для налаштування кодування

using namespace std;

// Базовий клас
class Animal {
protected:
    string species; // Поле для виду

public:
    // Конструктор
    Animal(string sp) : species(sp) {}

    // Метод для їжі
    void eat() {
        cout << "Тварина виду " << species << " їсть." << endl;
    }
};

// Похідний клас
class Bird : public Animal {
private:
    double wingSpan; // Поле для розмаху крил

public:
    // Конструктор
    Bird(string sp, double ws) : Animal(sp), wingSpan(ws) {}

    // Метод для польоту
    void fly() {
        cout << "Птах виду " << species << " літає з розмахом крил " 
             << wingSpan << " метрів." << endl;
    }
};

int main() {
    // Налаштування кодування
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Створення об'єкта класу Animal
    Animal animal("Ссавець");
    animal.eat();

    // Створення об'єкта класу Bird
    Bird bird("Орел", 2.5);
    bird.eat();
    bird.fly();

    return 0;
}
