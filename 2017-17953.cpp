#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int num;
	vector<int>ivec;

	while(cin>>num){
		ivec.push_back(num);
	}
	std::sort(ivec.rbegin(), ivec.rend());

	cout << "ordered array" << endl;
	for (auto i : ivec) {
		cout << i << " ";
	}
}
