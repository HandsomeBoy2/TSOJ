#include <iostream>
#include <map>
using namespace std;
int main() {
	int num;
	while (scanf("%d", &num) != EOF) {
		map<int, int> p;
		if (num != -1)
				p[num]++;
		do {
			cin >> num;
			if (num != -1)
				p[num]++;
		} while (num != -1);
		for (const auto &q:p) {
			cout << q.first << " " << q.second << endl;
		}
	}
	return 0;
}

