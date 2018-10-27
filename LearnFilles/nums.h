#pragma once
#include <iostream>

class nums {

public :

	void readInt() {

		int x;
		std::cout << "Insert number here..."; 
		std::cin >> x;

		std::cout << "Number properties:\n";
		std::cout << ((isPrime(x)) ? "X is prime\n" : "X is not prime\n");

	}

private:

	bool isPrime(int x) {

		if (x < 2)
			return false;
		if (x > 2 && x % 2 == 0)
			return false;

		for (int d = 3; d * d <= x / d; d += 2)
			if (x % d == 0)
				return false;

		return true;
	}

};