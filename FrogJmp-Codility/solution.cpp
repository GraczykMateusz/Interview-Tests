#include "solution.h"

int solution(int X, int Y, int D) {
	int jumpsCount = 0;
	
	while(X < Y) {
		X += D;
		jumpsCount++;
	}

	return jumpsCount;
}
