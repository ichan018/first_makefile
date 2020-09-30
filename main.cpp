#include <iostream>
#include "evenNum.h"

int zoom = -1;

int main(){
	std::cout << "Hello world!" << std::endl;
        while(zoom < 0 || zoom > 9){
		std::cout << "Pick a number from 0 to 9" << std::endl;
		std::cin >> zoom;
		std::cout << std::endl;
	}
	
	if ((zoom % 2) == 0){
            EvenNum();
	}else {
            std::cout <<"Do odd num stuff" << std::endl;
	}
	
	return 0;
}


