//1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int menu() {
	printf("********************\n");
	printf("**** 1:��ʼ��Ϸ ****\n");
	printf("**** 0:������Ϸ ****\n");
	printf("********************\n");
	return 0;
}
int game() {
	int randomnum = rand() % 10 + 1;
	int input = 0;
	while (1) {
		printf("���������µ����֣�");
		scanf("%d", &input);
		if (input > randomnum) {
			printf("�´���\n");
		}
		else if (input < randomnum) {
			printf("��С��\n");
		}
		else {
			printf("��ϲ���¶���!!!\n");
		}
	}
}

int main() {
	int input = 0;
	srand((unsigned)time(NULL));
	do {
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����ѡ���������������룺\n");
			break;
		}
	} while (input);
	return 0;
}

//2

#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int tofind = 2;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < tofind) {
			left = mid + 1;
		}
		else if (arr[mid] > tofind) {
			right = mid - 1;
		}
		else {
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
		if (left > right) {
			printf("û�ҵ�\n");
		}
	}
	system("pause");
	return 0;
}

//3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	for (; i < 3; i++) {
		char password[1024] = { 0 };
		printf("��������������:\n");
		scanf("%s", &password);
		if (strcmp(password, "374272") == 0) {
			printf("��½�ɹ�\n");
			break;
		}
		else {
			printf("������������������\n");
		}
	}
	if (i == 3) {
		printf("���Ѿ��������\n");
	}
	system("pause");
	return 0;
}

//4

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 0;
	printf("������һ���ַ���");
	t = getchar();
	if (t >= 'a' && t <= 'z') {
		putchar(t - 32);
	}

	else if (t >= 'A' && t <= 'Z') {
		putchar(t + 32);
	}

	else if (t >= '0' && t <= '9') {
		;
	}
	printf("\n");
	system("pause");
	return 0;
}