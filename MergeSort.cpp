#include <iostream>
#include <vector>
using namespace std;



vector<int>* MergeSort(vector<int>* arr) {
	if (arr.size <= 1) {
		return arr;
	}
	vector<int>* left = MergeSort(
}

int main() {
	cout << "Hello This Is Joshua" << endl;
	cout << "This is Joshua I'm Conflicting" << endl;
	vector<int> test = {1, 2, 3};
	vector<int> tester(test.begin(), test.end() - (test.size() / 2));
	for (auto i : tester) {
		cout << i << endl;
	}
	return 0;
}
