#include <iostream>

using namespace std;

int main(void) {
    int *numbers, how_many_numbers;
    int  aux;
    bool swapped;

    cout << "How many numbers are you going to sort? ";
    cin >> how_many_numbers;
    if( how_many_numbers <= 0 || how_many_numbers > 1000000) {
        cout << "Are you kidding?" << endl;
        return 1;
    }
    numbers = new int[how_many_numbers];
    for(int i = 0; i < how_many_numbers; i++) {
        cout << "\nEnter the number #" << i + 1 << ": ";
        cin >> numbers[i];
    }
    do {
        swapped = false;
        for(int i = 0; i < how_many_numbers - 1; i++)
            if(numbers[i] > numbers[i + 1]) {
                swapped = true;
                aux = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = aux;
            }
    } while(swapped);
    cout << endl << "The sorted array:" << endl;
    for(int i = 0; i < how_many_numbers; i++)
        cout << numbers[i] << " ";
    cout << endl;
    delete [] numbers;
    return 0;
}
