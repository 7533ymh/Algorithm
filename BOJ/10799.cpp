#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;


int sum,i;
string a;
stack <char>stk;

int main() {
	
	

	cin >> a;

		for (int i = 0; i < a.size(); i++ ){
			if (a[i] == '(') {
				if (a[i + 1] == ')') {
					sum += stk.size();
						i++;
				}
				else {
					stk.push(a[i]);
				}
			}
			else {
				if (stk.size() != 0) {
					stk.pop();
					sum += 1;
				}
			}
		}

		printf("%d\n", sum);
		
	

	return 0;
}