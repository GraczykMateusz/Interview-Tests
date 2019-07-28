#include <iostream>

int **createArray2D() {
	int **arr = new int*[5];
	for(int i = 0; i < 5; i++) {
                arr[i] = new int[5];
	}
	return arr;
}

int **setNumbers(int **arr) {
	int k = 10;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			arr[i][j] = k;
			k++;
		}
	}
	return arr;
}

void beforeRotatedArray(int **arr) {
	for(int i = 0; i < 5; i++)
                for(int j = 0; j < 5; j++) {
                        std::cout << arr[i][j] << " ";
			if(j == 4)
				std::cout << std::endl;
		}
}

int **rotatedArray(int **arr) {
	for(int z = 0; z < 5; z++) {
		for(int l = 4; l >= 0; l--) {
			std::cout << arr[l][z] << " ";
	                if(l == 0) {
	        	        std::cout << std::endl;
			}
		}
	}
}

int main() {
	auto arr = createArray2D();
	setNumbers(arr);
	beforeRotatedArray(arr);	
	std::cout << "--------------" << std::endl;
	rotatedArray(arr);
	
	return 0;
}
