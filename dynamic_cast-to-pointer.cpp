#include <iostream>
#include <string>
using namespace std;

class Pet {
protected: string name;
public:	   Pet(string name) : name(name) {}
	   virtual void MakeSound(void) { cout << name << " is silent :(" << endl; }
};

class Dog : public Pet {
public:	Dog(string name) : Pet(name) {}
	void MakeSound(void) { cout << name << " says: Woof!" << endl; }
};

class GermanShepherd : public Dog {
public:	GermanShepherd(string name) : Dog(name) {}
	void MakeSound(void) { cout << name << " says: Wuff!" << endl; }
	void Laufen(void) { cout << name << " runs (gs)!" << endl; }
};

class MastinEspanol : public Dog {
public:	MastinEspanol(string name) : Dog(name) {}
	void MakeSound(void) { cout << name << " says: Guau!" << endl; }
	void Ejecutar(void) { cout << name << " runs (mes)!" << endl; }
};

void PlayWithPet(Pet *pet) {
	GermanShepherd *gs;
	MastinEspanol *mes;

	pet -> MakeSound();
	if(gs = dynamic_cast<GermanShepherd *>(pet))
		gs -> Laufen();
	if(mes = dynamic_cast<MastinEspanol *>(pet))
		mes -> Ejecutar();
}

int main(void) {
	Pet *pet = new Pet("creature");
	Dog *dog = new Dog("Dog");
	GermanShepherd *gs = new GermanShepherd("Hund");
	MastinEspanol *mes = new MastinEspanol("Perro");
	
	PlayWithPet(pet);
	PlayWithPet(dog);
	PlayWithPet(gs);
	PlayWithPet(mes);
	
	return 0;
}