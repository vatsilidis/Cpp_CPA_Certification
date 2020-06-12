#include <iostream>

using namespace std;

namespace {
	int Troll = 1;
	float Wizard = -0.5;
}

namespace Mordor {
	int Troll = 2 ;
	float Wizard = 0.5;
}


int main(void) {
	cout << Troll << " " << Wizard << endl;
	cout << Mordor::Troll << " " << Mordor::Wizard << endl;
	return 0;
}

