#include <stdio.h>
#include <string.h>

struct student{
	char name[20];
	int age;
	char sex;
	float gpa;
};
struct student findOld( struct student baby[] , int count );

int main(){
	struct student children[5];
	strcpy(children[0].name,"Zero");
	children[0].age = 10 ;
	children[0].sex = 'M' ;
	children[0].gpa = 1.50 ;
	for(int i = 1 ; i < 5 ; i++) {
		printf("Children [%d]'s name, age, sex, gpa : ", i );
		scanf("%s %d %c %f", children[i].name,
							&children[i].age,
							&children[i].sex,
							&children[i].gpa);
	} //ent loop
	struct student oldChild;
	oldChild = findOld( children, 5 );
	printf("%s %d %c %f", oldChild.name,
						  oldChild.age,
						  oldChild.sex,
						  oldChild.gpa);
	
	return 0;
} //end function

struct student findOld( struct student baby[] , int count ){
	int maxAge, maxI;
	maxAge = baby[0].age;
	maxI = 0;
	for(int i = 1 ; i < count ; i++){
		if( baby[i].age > maxAge ){
			maxAge = baby[i].age;
			maxI = i;
		} //ent if
	} //ent loop
	return baby[maxI];
} //end function
