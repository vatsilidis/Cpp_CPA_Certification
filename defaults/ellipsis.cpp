#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void function(int i) {
	switch(i) {
	case 0: throw out_of_range("0");
	case 1: throw overflow_error("1");
	case 2: throw domain_error("2");
	}
}

int main(void) {
	for(int i = 0; i < 3; i++) {
		try {
			function(i);
		}
		catch(...) {
			cout << "Exception caught!" << endl;
		}
	}
	return 0;
}
