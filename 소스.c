#include <stdio.h>

void main() {
	char name[256];
	printf("�̸��� ��� �Ǽ���?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����Դϱ�?");
	scanf_s(" %d", &age);

	float cm;
	printf("Ű�� ��.cm�Դϱ�?");
	scanf_s("%f", &cm);

	double weight;
	printf("�� kg�Դϱ�?");
	scanf_s(" %lf", &weight);

	char crime[256];
	printf("���˰� ���ϱ�?");
	scanf_s("%s", crime, sizeof(crime));

	printf("-���� �ۼ�-");
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("Ű: %.2f\n", cm);
	printf("������:%.2lf\n", weight);
	printf("����:%s\n", crime);

}