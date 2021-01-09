#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
using namespace std;


queue <int>q;
int x, num;
string a;

void push() {
	q.push(x);
}

void pop() {
	if (q.empty()) {
		printf("-1\n");
	}
	else {
		printf("%d\n",q.front());
		q.pop();
	}
}

void size() {
	printf("%d\n", q.size());
}

void empty() {
	if (q.empty()) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void front() {
	if (q.empty()) {
		printf("-1\n");
	}
	else {
		printf("%d\n", q.front());
	}
}


void back() {
	if (q.empty()) {
		printf("-1\n");
	}
	else {
		printf("%d\n", q.back());
	}
}





int main() {

	scanf("%d", &num);

	while (num--) {
		cin >> a;
		if (a == "push") {
			scanf("%d", &x);
			push();
		}
		else if (a == "pop") {
			pop();
		}
		else if (a == "size") {
			size();
		}
		else if (a == "empty") {
			empty();
		}
		else if (a == "front") {
			front();
		}
		else if (a == "back") {
			back();
		}
	}





	return 0;
}