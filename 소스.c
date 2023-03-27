#include <stdio.h>

void main() {
	char name[256];
	printf("이름이 어떻게 되세요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살입니까?");
	scanf_s(" %d", &age);

	float cm;
	printf("키가 몇.cm입니까?");
	scanf_s("%f", &cm);

	double weight;
	printf("몇 kg입니까?");
	scanf_s(" %lf", &weight);

	char crime[256];
	printf("범죄가 뭡니까?");
	scanf_s("%s", crime, sizeof(crime));

	printf("-보고서 작성-");
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("키: %.2f\n", cm);
	printf("몸무게:%.2lf\n", weight);
	printf("범죄:%s\n", crime);

}