#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void function(int i) {
	switch(i) {
	case 0: throw out_of_range("0");
	case 1: throw overflow_error("1");
	case 2: throw domain_error("2");
	case 3: throw exception();
	}
}

int main(void) {
	for(int i = 0; i < 4; i++) {
		try {
			function(i);
		}
		catch(out_of_range ofr) {
			cout << "Out of range: " << ofr.what() << endl;
		}
		catch(overflow_error ovf) {
			cout << "Overflow: " << ovf.what() << endl;
		}
		catch(domain_error dmn) {
			cout << "Domain: " << dmn.what() << endl;
		}
		catch(exception ex) {
			cout << "Exception: " << ex.what() << endl;
		}
	}
	return 0;
}
