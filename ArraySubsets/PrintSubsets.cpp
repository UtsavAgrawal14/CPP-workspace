/*
 * PrintSubsets.cpp
 *
 *  Created on: 09-Jan-2018
 *      Author: Utsav
 */

#include <iostream>

int main() {

	std::cout << "Enter the number of elements in array:"<<std::endl;
	int n;
	std::cin >> n;
	int arr[n];
	std::cout << "Enter " << n << " elements:"<<std::endl;
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	std::cout << "Entered array:"<<std::endl;
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout<<"Subsets "<<std::endl;
	long counter = 1;
	for(int i = 0; i < (1<<n); ++i){
		std::cout<<counter++<<".) ";
		for(int j = 0; j < n; ++j){
			if(i & (1<<j)){
				std::cout<<arr[j]<<"  ";
			}
		}
		std::cout<<std::endl;
	}
	return 0;
}
