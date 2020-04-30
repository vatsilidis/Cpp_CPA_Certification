#include <iostream>
#include <string>

using namespace std;

class Pet {
protected:
	string name;
public:
	void NameMe(string name) { this -> name = name; }
	void MakeSound(void) { cout << name << " says: no comments" << endl; }
};

void NamePetByValue(string name, Pet pet) {
	pet.NameMe(name);
}

void NamePetByPointer(string name, Pet *pet) {
	pet -> NameMe(name);
}

void NamePetByReference(string name, Pet &pet) {
	pet.NameMe(name);
}

int main(void) {
	Pet pet;
	
	pet.NameMe("no_name");
	NamePetByValue("Alpha", pet);
	pet.MakeSound();
	NamePetByPointer("Beta", &pet);
	pet.MakeSound();
	NamePetByReference("Gamma", pet);
	pet.MakeSound();

	return 0;
}