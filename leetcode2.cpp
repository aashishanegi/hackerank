#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256


int firstNonRepeating(char* str)
{

	int arr[NO_OF_CHARS];
	for (int i = 0; i < NO_OF_CHARS; i++)
		arr[i] = -1;


	for (int i = 0; str[i]; i++) {
		if (arr[str[i]] == -1)
			arr[str[i]] = i;
		else
			arr[str[i]] = -2;
	}

	int res = INT_MAX;
	for (int i = 0; i < NO_OF_CHARS; i++)

		if (arr[i] >= 0)
			res = min(res, arr[i]);

	return res;
}

int main()
{
	char str[15];
	cin>>str;
	int index = firstNonRepeating(str);
	if (index == INT_MAX)
		cout<<-1;
	else
		cout << index;
	return 0;
}
