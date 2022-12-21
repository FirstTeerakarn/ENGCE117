#include <stdio.h>
#include <string.h>

struct student{
	int age;
	float gpa;
};

void findOld( struct student *baby );

int main(){
	struct student children;
	findOld(&children);
	printf("Student Age : %d\n", children.age);
	printf("Student GPA : %f\n", children.gpa);
	return 0;
} //end function

void findOld( struct student *baby ){
	(*baby).age = 20;
	(*baby).gpa = 2.50 ;
} //end function
