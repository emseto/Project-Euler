#include <iostream>
#include <cmath>

int main(){
	int sum_of_squares = 0, square_of_sums = 0, n_difference;

	for(int i = 1; i <= 100; i++){
		int s_temp = pow(i, 2);
		sum_of_squares += s_temp;
	}

	std::cout << "sum_of_squares: " << sum_of_squares << std::endl;

	int n_temp = 0;
	for(int j = 1; j <= 100; j++){
		square_of_sums += j;
	}

	square_of_sums = pow(square_of_sums, 2);
	std::cout << "square_of_sums: " << square_of_sums << std::endl;

	if(square_of_sums > sum_of_squares){
		n_difference = square_of_sums - sum_of_squares;
		std::cout << "difference1: " << n_difference << std::endl;
	} else {
		n_difference = sum_of_squares - square_of_sums;
		std::cout << "difference2: " << n_difference << std::endl;
	}

	return 0;
}