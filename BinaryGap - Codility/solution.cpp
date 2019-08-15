int solution(int N) {
        int binaryGapLenght = 0, tempBinaryGapLenght = 0;
        std::vector<int> binaryN;
	
	//Convert to binary
        for(N; N > 0; N = N / 2)
                binaryN.push_back(N % 2);

        auto it = binaryN.begin();
        while (it != binaryN.end() - 1) { // check all numbers
                tempBinaryGapLenght = 0;
                if(*it == 1) { // search first '1'
                        it++; // next number
                        while(*it == 0) { // next number until '1'
                                it++;
                                tempBinaryGapLenght++;
                                if(*it == 1) { // if we find gap
                                        if(tempBinaryGapLenght > binaryGapLenght) // check max lenght
                                                binaryGapLenght = tempBinaryGapLenght;
                                }
                        }
                }
                else {
                        it++;
                }
        }
        return binaryGapLenght;
}
