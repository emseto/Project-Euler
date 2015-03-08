/* Program:	Problem 2 (Even Fibonacci Numbers)
 * File(s):	p2.cpp
 * Name:	Emily Seto
 * Date:	03/08/2015	*/

#include <iostream>

int main(int argc, char* argv[]){
	long int n_prev = 1; 
	long int n_next = 2;
	long int n_esum = 0;
	long int t_prev = 0;

	std::cout << "   n_prev: " << n_prev << std::endl;
	std::cout << "   n_next: " << n_next << std::endl;
	std::cout << "   n_esum: " << n_esum << std::endl;
	std::cout << "------------------------------------------------------------ " << std::endl;

	for(int i = 0; n_next < 4e+6; i++){
		if(n_next % 2 == 0){
			n_esum += n_next;
		}

		t_prev = n_next;
		n_next = n_prev + n_next;
		n_prev = t_prev;

		std::cout << "   n_prev: " << n_prev << std::endl;
		std::cout << "   n_next: " << n_next << std::endl;
		std::cout << "   n_esum: " << n_esum << std::endl;
		std::cout << "iteration: " << i << std::endl;
		std::cout << "------------------------------------------------------------ " << std::endl;
	}

	return 0;
}