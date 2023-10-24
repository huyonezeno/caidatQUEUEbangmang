#include<iostream>
#include<algorithm>
#define MAX 100
using namespace std;
struct queue {
	int A[MAX];
	int front, rear;
};
void init(queue& q) {
	q.front = 0;
	q.rear = -1;
}
int isEmpty(queue q) {
	if (q.front > q.rear) {
		return 1;
	}
	else {
		return 0;
	}
}
int isFull(queue q) {
	if (q.rear == MAX - 1) {
		return 0;
	}
	return 1;
}
void push(queue& q, int x) {
	if (isFull(q) == 1) {
		q.rear++;
		q.A[q.rear] = x;
	}
}
void pop(queue& q) {

	if (!isEmpty(q)) {
		q.front++;
	}
	else {
		q.front = 0, q.rear = -1;
	}
}
void output(queue q) {
	for (int i = q.front; i <= q.rear; i++) {
		cout << q.A[i] << " ";
	}
	cout << endl;
}
int main() {
	queue q;
	init(q);
	int n;
	cin >> n;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			push(q, x);
		}
		pop(q);
		output(q);
		push(q, 5);
		output(q);
}

