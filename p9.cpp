#include <iostream>
#include <cmath>

int main(){
	int a, b, c;
	for(int a = 0; a < 1000; a++){
		for(int b = 0; b < 1000; b++){
			c = sqrt(pow(a, 2) + pow(b, 2));
			if(a < b  && b < c){
				if((a + b + c == 1000) && (pow(a, 2) + pow(b, 2) == pow(c, 2))){
					std::cout << "a + b + c = " << a + b + c << std:: endl;
					if(a * b * c != 0){
						std::cout << "a * b * c = " << a * b * c << std::endl;
					}
				}
			}
		}
	}

	return 0;
}