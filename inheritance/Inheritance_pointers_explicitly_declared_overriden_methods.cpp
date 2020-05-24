#include <iostream>

using namespace std;

class Pet {
protected:
	string Name;
public:
	Pet(string n) { Name = n; }
	void MakeSound(void) { cout << Name << " the Pet says: Shh! Shh!" << endl; }
};

class Cat : public Pet {
public:
	Cat(string n) : Pet(n) { }
	void MakeSound(void) { cout << Name << " the Cat says: Meow! Meow!" << endl; }
};

class Dog : public Pet {
public:
	Dog(string n) : Pet(n) { }
	void MakeSound(void) { cout << Name << " the Dog says: Woof! Woof!" << endl; }
};

int main(void) {
	Pet *a_pet1, *a_pet2;
	Cat *a_cat;
	Dog *a_dog;
	
	a_pet1 = a_cat = new Cat("Kitty");
	a_pet2 = a_dog = new Dog("Doggie");
	a_pet1 -> MakeSound();
	a_cat  -> MakeSound();
	a_pet2 -> MakeSound();
	a_dog  -> MakeSound();
	return 0;
}
	