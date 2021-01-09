#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
using namespace std;


int t;
char menu, x;
string a,result;
stack <char>stk;
stack <char>tmp;

int main() {

	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		stk.push(a[i]);
	}

	int num;
	scanf("%d", &num);

	while (num--) {

		scanf("%s", &menu);

		if (menu == 'P') {
			scanf("%s", &x);
			stk.push(x);

		}
		else if (menu == 'L') {
			if (!stk.empty()) {
				tmp.push(stk.top());
				stk.pop();
			}

		}
		else if (menu == 'D') {
			if (!tmp.empty()) {
				stk.push(tmp.top());
				tmp.pop();
			}

		}
		else if (menu == 'B') {
			if (!stk.empty()) {
				stk.pop();
			}
		}
	}


	while (!stk.empty()) {
		tmp.push(stk.top());
		stk.pop();
	}

	
	while (!tmp.empty()) {
		printf("%c", tmp.top());
		tmp.pop();
	}
	printf("\n");
	return 0;
}