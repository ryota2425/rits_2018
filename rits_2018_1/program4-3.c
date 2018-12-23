#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct __physcheck {
	char name[20];
	int height;
	double vision;
	struct __physcheck *next;

} PhysCheck;

typedef struct __list {
	PhysCheck *head;
	PhysCheck *tail;
} List;

void InsertRear(List *list, char *name, int height, double vision) {
	PhysCheck *x = (PhysCheck *) malloc(sizeof(PhysCheck));
	strcpy(x->name, name);
	x->height = height;
	x->vision = vision;
	if (list->head == NULL) {

		list->head = x;
		list->tail = x;

	} else {

		list->tail->next = x;
		list->tail = list->tail->next;

	}

}

void Print(List *list) {
	if (list->head == NULL)
		puts("ノードがありません");
	else {
		PhysCheck *x = list->head;
		puts("   一覧表");
		while (x != NULL) {
			printf("%-16s%-4d%6f\n", x->name, x->height, x->vision);
			x = x->next;
		}

	}
}

PhysCheck *SerchName(List *list, char *name) {
	PhysCheck *ans, *xx = list->head;

	if (list->head == NULL) {
		ans = NULL;

	}

		for (; xx != NULL; xx = xx->next) {

			if (strcmp(xx->name, name) == 0) {
				ans = xx;

				break;

			}
			ans=NULL;
		}
		return ans;
	}

	int main(void) {

		List list;
		list.head = NULL;
		list.tail = NULL;
		char serchname[20];
		PhysCheck *x = NULL;

		InsertRear(&list, "AKASAKA Tadao", 162, 0.3);

		InsertRear(&list, "KATHO Tomoyaki", 173, 0.7);
		InsertRear(&list, "SAITOH Syouji", 175, 2.0);
		InsertRear(&list, "TAKEDA Shinya", 175, 1.5);
		InsertRear(&list, "NAGAHAMA Misaki", 168, 0.4);
		InsertRear(&list, "HAMADA Tetsuaki", 174, 1.2);
		InsertRear(&list, "MATSUTOMI Akio", 169, 0.8);

		Print(&list);

		printf("誰のことが知りたいですか");
		fgets(serchname, 20, stdin);
		serchname[strlen(serchname) - 1] = 0;
		x = SerchName(&list, serchname);
		if (x == NULL) {
			printf("データが見つかりませんでした\n");
		} else {
			printf("%sさんの身長は%dで視力は%.1fです\n", x->name, x->height, x->vision);
		}
		return 0;
	}
