/* TIC TAC TOE GAME PROGRAMS */

#include<stdio.h>
int main() {
	int i,j;
	printf("\n\n\n ******* WELCOME TO THE TIC TAC TOE GAME ******\n");
	printf("To play this game there must be two players.\n");
	printf("PLAYER-1:- 0\n");
	printf("PLAYER-2:- 1\n");
	printf("Initially all blocks are filled with numbers\n");
	printf("The players must select any of the numbers\n\n");
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	int flag=1,pos1,pos2;
	while(flag){
		a:printf("PLAYER-1 : Enter Your Position ");
		scanf("%d",&pos1);
		if(a[0][0]==1 && a[0][0]==pos1)
			a[0][0]=0;
		else if(a[0][1]==2 && a[0][1]==pos1)
			a[0][1]=0;
		else if(a[0][2]==3 && a[0][2]==pos1)
			a[0][2]=0;
		else if(a[1][0]==4 && a[1][0]==pos1)
			a[1][0]=0;
		else if(a[1][1]==5 && a[1][1]==pos1)
			a[1][1]=0;
		else if(a[1][2]==6 && a[1][2]==pos1)
			a[1][2]=0;
		else if(a[2][0]==7 && a[2][0]==pos1)
			a[2][0]=0;
		else if(a[2][1]==8 && a[2][1]==pos1)
			a[2][1]=0;
		else if(a[2][2]==9 && a[2][2]==pos1)
			a[2][2]=0;
		else {
			printf("Please enter another position..!");
			goto a;
		}
		for(i=0;i<3;++i) {
			for(j=0;j<3;++j) {
				printf("%d",a[i][j]);
			}
		printf("\n");
		}
		if(((a[0][0]==1) || (a[0][0]==0))&&((a[0][1]==1) || (a[0][1]==0))&&((a[0][2]==1) || (a[0][2]==0))&&((a[1][0]==0) || (a[1][0]==1))&&((a[1][1]==0) || (a[1][1]==1))&&((a[1][2]==0) || (a[1][2]==1))&&((a[2][0]==0) || (a[2][0]==1))&&((a[2][1]==0) || (a[2][1]==1))&&((a[2][2]==0) || (a[2][2]==1))) {
			printf("Both players are occupy all the places..\n");
			printf("GAME IS OVER\n");
			printf("**** Thanks for playing ****\n");
			break;
		}
		if((a[0][0]==0 && a[0][1]==0 && a[0][2]==0) || (a[1][0]==0 && a[1][1]==0 && a[1][2]==0) || (a[2][0]==0 && a[2][1]==0 && a[2][2]==0)) {
			printf(" ***** CONGRATULAIONS *****\n");
			printf("PLAYER-1 is WINNER...\n");
			break;
			flag=0;
		}
		else if((a[0][0]==0 && a[1][0]==0 && a[2][0]==0) || (a[0][1]==0 && a[1][1]==0 && a[2][1]==0) || (a[0][2]==0 && a[1][2]==0 && a[2][2]==0)) {
			printf(" ***** CONGRATULAIONS *****\n");
			printf("PLAYER-1 is WINNER...\n");
			break;
			flag=0;
		}
		else if((a[0][0]==0 && a[1][1]==0 && a[2][2]==0) || (a[0][2]==0 && a[1][1]==0 && a[2][0]==0)){
			printf(" ***** CONGRATULAIONS *****\n");
			printf("PLAYER-1 is WINNER...\n");
			break;
			flag=0;
		}
		b:printf("PLAYER-2 : Enter Your Position ");
		scanf("%d",&pos2);
		if(a[0][0]==1 && a[0][0]==pos2)
			a[0][0]=1;
		else if(a[0][1]==2 && a[0][1]==pos2)
			a[0][1]=1;
		else if(a[0][2]==3 && a[0][2]==pos2)
			a[0][2]=1;
		else if(a[1][0]==4 && a[1][0]==pos2)
			a[1][0]=1;
		else if(a[1][1]==5 && a[1][1]==pos2)
			a[1][1]=1;
		else if(a[1][2]==6 && a[1][2]==pos2)
			a[1][2]=1;
		else if(a[2][0]==7 && a[2][0]==pos2)
			a[2][0]=1;
		else if(a[2][1]==8 && a[2][1]==pos2)
			a[2][1]=1;
		else if(a[2][2]==9 && a[2][2]==pos2)
			a[2][2]=1;
		else {
			printf("Please enter another position..!\n");
			goto b;
		}
		for(i=0;i<3;++i) {
			for(j=0;j<3;++j) {
				printf("%d",a[i][j]);
			}
		printf("\n");
		}
		if(((a[0][0]==1) || (a[0][0]==0))&&((a[0][1]==1) || (a[0][1]==0))&&((a[0][2]==1) || (a[0][2]==0))&&((a[1][0]==0) || (a[1][0]==1))&&((a[1][1]==0) || (a[1][1]==1))&&((a[1][2]==0) || (a[1][2]==1))&&((a[2][0]==0) || (a[2][0]==1))&&((a[2][1]==0) || (a[2][1]==1))&&((a[2][2]==0) || (a[2][2]==1))) {
			printf("Both players are occupy all the places..\n");
			printf("GAME IS OVER\n");
			printf("**** Thanks for playing ****\n");
			break;
		}
		if((a[0][0]==1 && a[0][1]==1 && a[0][2]==1) || (a[1][0]==1 && a[1][1]==1 && a[1][2]==1) || (a[2][0]==1 && a[2][1]==1 && a[2][2]==1)) {
			printf(" ***** CONGRATULAIONS *****\n");
			printf("PLAYER-2 is WINNER...\n");
			break;
			flag=0;
		}
		else if((a[0][0]==1 && a[1][0]==1 && a[2][0]==1) || (a[0][1]==1 && a[1][1]==1 && a[2][1]==1) || (a[0][2]==1 && a[1][2]==1 && a[2][2]==1)) {
			printf(" ***** CONGRATULAIONS *****\n");
			printf("PLAYER-2 is WINNER...\n");
			break;
			flag=0;
		}
		else if((a[0][0]==1 && a[1][1]==1 && a[2][2]==1) || (a[0][2]==1 && a[1][1]==1 && a[2][0]==1)){
			printf(" ***** CONGRATULAIONS *****\n");
			printf("PLAYER-2 is WINNER...\n");
			break;
			flag=0;
		}


	}
	return 0;
}
