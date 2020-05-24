#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void function(int i) {
	switch(i) {
	case 0: throw domain_error("0");
	case 1: throw logic_error("1");
	case 2: throw exception();
	case 3: throw range_error("2");
	case 4: throw "so bad";
	}
}

int main(void) {
	for(int i = 0; i < 5; i++) {
		try {
			function(i);
		}
		catch(exception ex) {
			cout << "Exception: " << ex.what() << endl;
		}
	}
	return 0;
}
