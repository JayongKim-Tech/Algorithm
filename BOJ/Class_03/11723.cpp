#include <iostream>
using namespace std;


bool set[20];

void add(int x)
{
	if (!set[x - 1]) set[x - 1] = true;
}

void remove(int x)
{
	if (set[x - 1]) set[x - 1] = false;
}

void check(int x)
{
	if (set[x - 1]) cout << 1 << "\n";
	else cout << 0 << "\n";
}

void toggle(int x)
{
	if (set[x - 1]) set[x - 1] = false;
	else set[x - 1] = true;
}

void all()
{
	for (int i = 0; i < 20; i++) set[i] = true;
}

void empty()
{
	for (int i = 0; i < 20; i++) set[i] = false;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	int x;
	string input_line;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input_line;

		if (input_line != "all" && input_line != "empty") cin >> x;

		if (input_line == "add") add(x);
		else if (input_line == "remove") remove(x);
		else if (input_line == "check") check(x);
		else if (input_line == "toggle") toggle(x);
		else if (input_line == "all") all();
		else empty();
	}

}