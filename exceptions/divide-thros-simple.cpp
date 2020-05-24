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

void broker(int i) {
	try {
		function(i);
	}
	catch(logic_error le) {
		cout << "Broker - logic error: " << le.what() << endl;
	}
}

int main(void) {
	for(int i = 0; i < 5; i++) {
		try {
			broker(i);
		}
		catch(logic_error le) {
			cout << "Logic error: " << le.what() << endl;
		}
		catch(runtime_error re) {
			cout << "Runtime error: " << re.what() << endl;
		}
		catch(exception ex) {
			cout << "Exception: " << ex.what() << endl;
		}
		catch(...) {
			cout << "Something bad happened" << endl;
		}
	}
	return 0;
}
