#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	int n;
	cin >> n;
	int* F = new int[n + 1];
	for (int i = 0; i <= n; i++) {
		cin >> F[i];
	}
	b = F[0];
	for (int i = 1; i <= n; i++) {
		b = b * a + F[i];
	}
	cout << b;
	return 0;
}