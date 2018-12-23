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
void AddNode(PhysChecks *head, PhysChecks *data, char *name) {
	PhysChecks *ans = NULL, *xx = head->next;

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
		puts("挿入対象が見つかりませんでした");
	}

	else {

		data->next = ans->next;
		data->prev = ans;
		ans->next->prev = data;
		ans->next = data;

	}

}

void PrintNode(PhysChecks *head) {
	PhysChecks *tmp;
	tmp = head->next;
	if (head->next == NULL)
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
	char buf[256];
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

	tail->next->prev = x;
	tail->next = x;
	tail = tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);
	/*Additional phase*/
	x = malloc(sizeof(PhysChecks));

	printf("名前を入力してください");
	fgets(x->name, 20, stdin);
	x->name[strlen(x->name) - 1] = 0;
	printf("身長を入力してください");
	fgets(buf, 20, stdin);
	sscanf(buf, "%d", &x->height);
	printf("視力を入力してください");
	fgets(buf, 20, stdin);
	sscanf(buf, "%lf", &x->vision);
	puts("誰の後ろに追加しますか");
	fgets(name, 20, stdin);
	name[strlen(name) - 1] = 0;

	AddNode(head, x, name);

	PrintNode(head);

	return 0;
}
