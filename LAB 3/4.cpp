#include <stdio.h>
#include <string.h>

struct student{
	int age;
	float gpa;
};

int main(){
	struct student boy;
	struct student *girl;
	
	boy.age = 20;
	boy.gpa = 2.50;
	girl = &boy;
	
	printf("Age = %d \n", (*girl).age);
	printf("GPA = %f \n", (*girl).gpa);
	
	return 0;
} //end function
