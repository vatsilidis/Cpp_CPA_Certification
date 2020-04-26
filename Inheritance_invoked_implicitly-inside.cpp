// demonstrujemy dzia³anie przedefiniowanej metody wirtualnej
// wywo³anej w innej metodzie

#include <iostream>

using namespace std;

class Pet {
protected:
	string Name;
public:
	Pet(string n) { Name = n; }
	virtual void MakeSound(void) { cout << Name << " the Pet says: Shh! Shh!" << endl; }
	void WakeUp(void) { MakeSound(); }
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
	Cat *a_cat;
	Dog *a_dog;
	
	a_cat = new Cat("Kitty");
	a_cat -> WakeUp();
	a_dog = new Dog("Doggie");
	a_dog -> WakeUp();
	
	return 0;
}
	