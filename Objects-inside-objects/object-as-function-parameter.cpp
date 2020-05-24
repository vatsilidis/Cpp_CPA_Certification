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

void PlayWithPetByPointer(string name, Pet *pet) {
	pet -> NameMe(name);
	pet -> MakeSound();
}

void PlayWithPetByReference(string name, Pet &pet) {
	pet.NameMe(name);
	pet.MakeSound();
}

int main(void) {
	Pet *p1  = new Pet;
	Pet p2;

	PlayWithPetByPointer("anonymous", p1);
	PlayWithPetByReference("no_name", p2);
	
	PlayWithPetByPointer("no_name", &p2);
	PlayWithPetByReference("anonymous", *p1);
	
	return 0;
}