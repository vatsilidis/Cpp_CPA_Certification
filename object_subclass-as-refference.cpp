#include <iostream>
#include <string>
using namespace std;

class Pet {
protected: string name;
public:	   Pet(string name) { this -> name = name; }
	   void MakeSound(void) { cout << name << " is silent :(" << endl; }
};

class Dog : public Pet {
public:	Dog(string name) : Pet(name) {}
	void MakeSound(void) { cout << name << " says: Woof!" << endl; }
};

class GermanShepherd : public Dog {
public:	GermanShepherd(string name) : Dog(name) {}
	void MakeSound(void) { cout << name << " says: Wuff!" << endl; }
};

class MastinEspanol : public Dog {
public:	MastinEspanol(string name) : Dog(name) {}
	void MakeSound(void) { cout << name << " says: Guau!" << endl; }
};

void PlayWithPet(Pet &pet) {
	pet.MakeSound();
}

int main(void) {
	Pet pet("creature");
	Dog dog("Dog");
	GermanShepherd gs("Hund");
	MastinEspanol mes("Perro");
	
	PlayWithPet(pet);
	PlayWithPet(dog);
	PlayWithPet(gs);
	PlayWithPet(mes);
	
	return 0;
}