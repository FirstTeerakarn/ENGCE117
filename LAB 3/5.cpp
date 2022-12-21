#include <stdio.h>
#include <string.h>

struct Subscribe{
	char name[20];
	int follow;
	int like;
};
struct Subscribe *findSubscribe( struct Subscribe Channel[] , int count );

int main(){
	struct Subscribe Channel[3];
	for(int i = 0 ; i < 3 ; i++) {
		printf("Channel %d's  : Channel , Followers , Like : ", i );
		scanf("%s %d %d", Channel[i].name,
					   &Channel[i].follow,
					   &Channel[i].like);
	} //ent loop
	
	struct Subscribe *TopSubscribe;
	TopSubscribe = findSubscribe( Channel , 3 );
	printf("%s %d %d",  TopSubscribe->name,
						TopSubscribe->follow,
						TopSubscribe->like);
	
	return 0;
} //end function

struct Subscribe *findSubscribe( struct Subscribe Channel[] , int count ){
	int maxSubscribe, maxI;
	maxSubscribe = Channel[0].follow;
	maxI = 0;
	for(int i = 0 ; i < count ; i++){
		if( Channel[i].follow > maxSubscribe ){
			maxSubscribe = Channel[i].follow;
			maxI = i;
		} //ent if
	} //ent loop
	return &Channel[maxI];
} //end function
