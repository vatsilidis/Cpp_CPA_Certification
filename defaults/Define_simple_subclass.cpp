#include <iostream>

using namespace std;

class Super {
private:
	int storage;
public:
	void put(int val) { storage = val; }
	int get(void) { return storage; }
};

class Sub : public Super {
};

int main(void) {
	Sub object;

	object.put(100);
	object.put(object.get() + 1);
	cout << object.get() << endl;
	return 0;
}
