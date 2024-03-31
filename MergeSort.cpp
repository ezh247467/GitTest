#include <iostream>
#include <vector>
#include <cassert>
using namespace std;




vector<int> MergeSort(vector<int> arr) {
	if (arr.size <= 1) {
		return arr;
	}
	vector<int> left(arr.begin(), arr.end() - (arr.size() / 2));
	vector<int> left = MergeSort(
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
	cout << "Hello This Is Joshua" << endl;
	cout << "This is Joshua I'm Conflicting" << endl;
	vector<int> test = {1, 2, 3};
	vector<int> tester(test.begin(), test.end() - (test.size() / 2));
	for (auto i : tester) {
		cout << i << endl;
	}
	return 0;
}
