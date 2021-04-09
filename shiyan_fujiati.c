#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node {
	int data;
	struct node* next;
}LinkList;
int main() {
	int n;
	LinkList* head = NULL, * p = NULL, * q = NULL;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		p = (LinkList*)malloc(sizeof(LinkList));
		scanf("%d", &p->data);
		p->next = NULL; //确定p是头结点
		if (i == 0) {
			head = p;
		}
		else {
			q->next = p;
		}
		q = p;
	}


	LinkList* head1 = head, * head2 = head, * head3 = NULL;
	while (head1) {
		p = head1;
		int count = -1;
		while (head2) {
			bool flag = true;
			if (p->data == head2->data) {
				count++;
				if (count > 0) {
					head3->next = head2->next;
					free(head2);
					flag = false;
				}
			}
			if (flag) {
				head3 = head2;
				head2 = head2->next;
			}
			else {
				head2 = head3->next;
			}
		}
		head2 = head;
		head1 = head1->next;
	}
	while (head) {
		printf("%d ", head->data);
		head = head->next;
	}
	return 0;
}