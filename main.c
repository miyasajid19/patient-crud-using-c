#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "makechoice.h"
#include "adding_info.h"
#include "viewing_info.h"
#include "searching_info.h"
#include "editting_info.h"
#include "deleting_info.h"
int main()
{
	int user,num;
	top:
	user=choices();
	switch (user)
	{
		case 0:
			break;
		case 1:
			system("cls");
			printf("How many data do you have?");
			scanf("%d",&num);
			for(int i=0;i<num;i++)
			{
			add();
			}
			main();
			break;
		case 2:
			view();
			break;
		case 3:
			search();
			break;
		case 4:
			edit();
			break;
		case 5:
			delete();
			break;
		default:
			goto top;
			break;
	}	           
}                 
    