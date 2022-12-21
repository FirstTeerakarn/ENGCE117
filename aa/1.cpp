#include <stdio.h>

struct student{
	char name[20];
	int age;
	char sex;
	float gpa;
};
typedef struct student stds;

int main(){
	struct student aboy;
	stds agirl;
	aboy.age = 20 ;
	agirl.age = 19 ;
	printf("Boy age %d\n" , aboy.age);
	printf("Girl age %d\n" , agirl.age);
	return 0;
}
