//============================================================================
// Name        : FindSumInArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*Buggy program... :/*/
#include <iostream>
#include <vector>
#include <unordered_set>

bool hasSum(const std::vector<int>, int);

int main() {

	std::cout << "Enter array elements :\n";
	fflush(stdin);
	std::vector<int> arr;
	int elem;
	do {
		std::cin>>elem;;
		arr.push_back(elem);
	} while (elem != -1);
	fflush(stdin);
	std::cout<< "Enter the sum to be searched:\n";
	std::cin>>elem;
	std::cout<<"Have we found the elements with given sum?: "<<hasSum(arr, elem);
	return 0;
}

bool hasSum(const std::vector<int> data, int sum){
	std::unordered_set<int> comp;
	for(int val : data){
		if(comp.find(sum - val)!= comp.end()){
			return true;
		}
		comp.insert(sum - val);
	}
	return false;
}
