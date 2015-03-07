/* Program:	Problem 1 (Multiples of 3 and 5)
 * File(s):	p1.cpp
 * Name:	Emily Seto
 * Date:	03/07/2015	*/

#include <iostream>

int main(int argc, char* argv[]){
	int sum;
	for(int i = 0; i < 1000; i++){
		if((i % 3) == 0){
			sum += i;
		} else if((i % 5) == 0){
			sum += i;
		}
	}

	std::cout << sum << std::endl;
	return 0;
}