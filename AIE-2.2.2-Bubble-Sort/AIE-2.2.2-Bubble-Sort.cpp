
#include <iostream>

using namespace std;


int BubbleSort(int Array[], size_t Size) {
	
	bool Swapped;

	do {

		Swapped = false;

		for (int i = 0; i < Size - 1; i++) {			// This function sets a bool variable to false, and goes through side-by-side pairs of every element in the
														// array. It swaps the second of each pair if it detects the first is greater than it, and sets the bool to
			if (Array[i] > Array[i + 1]) {				// true. Because the bool is only changed if the pair argument is true, it gets "stuck" in a true state until
														// the end of the loop where the while can see that at least once in the current loop a swap occured. It will
				swap(Array[i], Array[i + 1]);			// only exit out of the loop if a full sweep of the elements is performed without a single swap.
				Swapped = true;

			}

		}

	} while (Swapped == true);

	return Array[Size];
}


int main()
{

	

}

