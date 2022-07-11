#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cout << "Gnomes:\n";

	int n;
	cin >> n;
	while (0 < (n--)) {
		int a, b, c;
		cin >> a >> b >> c;

		if ((a < b && b < c) ||
			(a > b && b > c)) {
			cout << "Ordered\n";
		}
		else {
			cout << "Unordered\n";
		}
	}

	return 0;
}