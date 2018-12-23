#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct __physchecks {
	char name[20];
	int height;
	double vision;
	struct __physchecks *prev;
	struct __physchecks *next;

} PhysChecks;
PhysChecks *RemoveNode(PhysChecks *head, char *name) {
	PhysChecks *ans=NULL, *xx = head->next;

	if (xx->next == xx->prev) {
		puts("nodeがみつかりませんでした");
//nodeがまったくない場合
	}

	for (; xx != head; xx = xx->next) {

		if (strcmp(xx->name, name) == 0) {
			ans = xx;

			break;

		}

	}

//探索完了しansに削除対象を格納している//

	if (ans == NULL) {

	} else if (ans == head->next) { //２先頭の時アドレス変更

		head->next = head->next->next;


	} else {

		for (; xx != head->next; xx = xx->next) { //途中にある時
			if (xx== ans) {
				xx->next->prev = ans->prev;
				xx->prev->next = ans->next;

				break;
			}

		}
	}
	return ans;
}

void PrintNode(PhysChecks *head) {
	PhysChecks *tmp;
	tmp = head->next;
	if (head->next->name == NULL)
		puts("ノードがありません");
	else {

		puts("   一覧表");
		while (tmp != head) {
			printf("%-16s%-4d%6f\n", tmp->name, tmp->height, tmp->vision);
			tmp = tmp->next;
		}

	}
}

int main(void) {
	PhysChecks *dummy = (PhysChecks *) malloc(sizeof(PhysChecks));
	PhysChecks *head = dummy;
	PhysChecks *tail = dummy;
	dummy->prev = dummy;
	dummy->next = dummy;
	char name[20];

	PhysChecks*x = malloc(sizeof(PhysChecks));
	strcpy(x->name, "ASAKA Tadao");
	x->height = 162;
	x->vision = 0.3;
	x->next = tail->next;
	x->prev = tail;

	tail->next->prev = x;
	tail->next = x;
	tail = tail->next;

	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);

	x = malloc(sizeof(PhysChecks));
	strcpy(x->name, "KATOH Tomoaki");
	x->height = 173;
	x->vision = 0.7;
	x->next = tail->next;
	x->prev = tail;

	tail->next->prev = x;
	tail->next = x;
	tail = tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);
	x = malloc(sizeof(PhysChecks));

	strcpy(x->name, "TAKEDA Shinya");
	x->height = 171;
	x->vision = 1.5;
	x->next = tail->next;
	x->prev = tail;

	tail->next->prev = x;
	tail->next = x;
	tail = tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);
	x = malloc(sizeof(PhysChecks));
	strcpy(x->name, "NAGAHAMA Masaki");
	x->height = 168;
	x->vision = 0.4;
	x->next = tail->next;
	x->prev = tail;

	tail->next->prev= x;
	tail->next = x;
	tail = tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);

	printf("誰のデータを削除しますか?");
	fgets(name, 20, stdin);
	name[strlen(name) - 1] = 0;

	PhysChecks *tmp = RemoveNode(head, name);

	if (tmp == NULL) {
		printf("データは見つかりませんでした\n");
	} else {
		printf("%sさんのデータを削除します\n", name);
		free(tmp);
	}
	PrintNode(head);

	return 0;
}
