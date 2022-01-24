#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int p1, s1;
	cin >> p1 >> s1;

	int s2, p2;
	cin >> s2 >> p2;

	auto p = p1 + p2;
	auto s = s1 + s2;

	if (s < p) {
		cout << "Persepolis";
	}
	else if (p < s) {
		cout << "Esteghlal";
	}
	else {
		if (s1 < p2) {
			cout << "Persepolis";
		}
		else if (p2 < s1) {
			cout << "Esteghlal";
		}
		else {
			cout << "Penalty";
		}
	}

	return 0;
}