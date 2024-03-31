#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

typedef unsigned int uint;


vector<int> MergeSort(vector<int> arr) {
	if (arr.size() <= 1) {
		return arr;
	}
	uint half = arr.size() / 2;
	vector<int> left_h(arr.begin(), arr.end() - half);
	vector<int> right_h(arr.end() - half, arr.end());

	// Split the vectors in half recursively
	vector<int> left = MergeSort(left_h);
	vector<int> right = MergeSort(right_h);	

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

	while (i < left.size()) {
		result.push_back(left[i++]);
	}
	while (j < right.size()) {
		result.push_back(right[j++]);
	}
	return result;
}

int main() {
	//Normal Case: 5 Ints from 1-5
	vector<int> normal = {4,3,1,2,5};
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
	vector<int> ref = {};
	//populate vector with random numbers
	for (int i = 0; i < 10000; i++) {
		int num = rand() % 50000;
		ref.push_back(num);
	}
	vector<int> stressAns = ref;
	sort(stressAns.begin(),stressAns.end());
	assert(MergeSort(ref) == stressAns);
	//Zero Case
	vector<int> zero = {};
	vector<int> zeroAns = {};
	assert(MergeSort(zero) == zeroAns);

	vector<int> ref2 = {};
	//populate vector with random numbers
	for (int i = 0; i < 1000000; i++) {
		int num2 = rand() % 50000000;
		ref2.push_back(num2);
	}
	vector<int> stressAns2 = ref2;
	sort(stressAns2.begin(),stressAns2.end());
	assert(MergeSort(ref2) == stressAns2);
	return 0;
}
