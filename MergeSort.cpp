#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

typedef unsigned int uint


vector<int> MergeSort(vector<int> arr) {
	if (arr.size() <= 1) {
		return arr;
	}
	uint half = arr.size() / 2
	vector<int> left(arr.begin(), arr.end() - half);
	vector<int> right(arr.end() - half, arr.end());

	// Split the vectors in half recursively
	vector<int> left = MergeSort(left);
	vector<int> right = MergeSort(right);	

	int i = 0, j = 0;
	vector<int> result;
	// Populate vector in order.
	while (i < left.size() && j < right.size()) {
		if (left[i] < right[j]) {
			result.push_back(left[i++]);
		} else {
			result.push_back(right[j++]);
		}
	}

	
}

int main() {
	//Normal Case: 5 Ints from 1-5
	/*vector<int> normal = {4,3,1,2,5};
	vector<int> normalAns = {1,2,3,4,5};
	assert(MergeSort(normal) == normalAns);
	//Duplicate Case: 5 Ints of the Same Number
	vector<int> dupe = {2,2,2,2,2};
	vector<int> dupeAns = {2,2,2,2,2};
	assert(MergeSort(dupe) == dupeAns);
	//Negative Case: 5 Ints with Negative and Positive
	vector<int> neg = {6, 3, -2, -10, 15};
	vector<int> negAns = {-10, -2, 3, 6, 15};
	assert(MergeSort(neg) == negAns);
	//Single Case: 1 Int
	vector<int> one = {5};
	vector<int> oneAns = {5};
	assert(MergeSort(one) == oneAns);
	//Single Case: 1 Int
	vector<int> one = {5};
	vector<int> oneAns = {5};
	assert(MergeSort(one) == oneAns);*/
	vector<int> test = {1, 2, 3};
	vector<int> tester(test.end() - (test.size() / 2), test.end());
	for (auto i : tester) {
		cout << i << endl;
	}
	return 0;
}
