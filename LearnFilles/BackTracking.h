#pragma once
#include <iostream>

class BackTracking {

public:

	void permutations(int n, int st[], int p) {

		for (int val = 1; val <= n; val++) {

			st[p] = val;
			if (isValid(p, st)) {
				if (p == n)
					write(p, st);
				else
					permutations(n, st, p + 1);
			}
		}
	}

	void combinations(int n, int k, int st[], int p) {

		for (int val = st[p-1] + 1; val <= n; val++) {

			st[p] = val;
			if (p == k)
				write(p, st);
			else
				combinations(n, k, st, p + 1);

		}
	}

	void arrangements(int n, int k, int st[], int p) {

		for (int val = 1; val <= n; val++) {

			st[p] = val;
			if (isValid(p, st)) {
				if (p == k)
					write(p, st);
				else
					arrangements(n, k, st, p + 1);
			}
		}
	}

private:

	bool isValid(int p, int st[]) {

		for (int i = 1; i < p; i++)
			if (st[i] == st[p])
				return false;

		return true;
	}

	void write(int p, int st[]) {

		for (int i = 1; i <= p; i++)
			std::cout << st[i] << ' ';

		std::cout << "\n";
	}

};
