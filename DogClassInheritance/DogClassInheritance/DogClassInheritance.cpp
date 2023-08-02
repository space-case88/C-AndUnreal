#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
	string breed;
	string color;
	double height;
	double weight;

	void shake() {
		cout << "dog is shaking hands" << endl;
	}

	void sit() {
		cout << "dog is sitting" << endl;
	}

	void layDown() {
		cout << "Dog is lying down" << endl;
	}
};

int main() {
	Dog myDog;
	myDog.breed = "Hound";
	myDog.color = "brown";
	myDog.height = 2.0;
	myDog.weight = 60.0;

	myDog.shake();
	myDog.sit();
	myDog.layDown();

	return 0;
}
