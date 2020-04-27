#include <iostream>
#include <string>

using namespace std;

class Pet {
protected:
	string Name;
public:
	Pet(string n) { Name = n; }
	void Run(void) { cout << Name << ": I'm running" << endl; }
};

class Dog : public Pet {
public:
	Dog(string n) : Pet(n) {};
	void MakeSound(void) { cout << Name << ": Woof! Woof!" << endl; }
};

class Cat : public Pet {
public:
	Cat(string n) : Pet(n) {};
	void MakeSound(void) { cout << Name << ": Meow! Meow!" << endl; }
};

int main(void) {
	Pet *a_pet = new Pet("pet");
	Cat *a_cat = new Cat("Tom");
	Dog *a_dog = new Dog("Spike");

	a_pet->Run();
	a_dog->Run(); a_dog->MakeSound();
	a_cat->Run(); a_cat->MakeSound();

	return 0;
}

