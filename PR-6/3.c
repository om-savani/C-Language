#include<stdio.h>

main()
{
	char pass[20];
	
	printf("Enter Your password : ");
	scanf("%[^\n]",&pass);
	
	int i,n=strlen(pass),cp=0,sm=0,num=0,sp=0;
	
	
	for(i=0;pass[i]!='\0';i++)
	{
		if(pass[i] >= 'A' && pass[i] <= 'Z')
		{
			cp++;
		}
		else if(pass[i] >= 'a' && pass[i] <= 'z')				
		{
			sm++;
		}
		else if(pass[i] >= '0' && pass[i] <= '9')
		{
			num++;		
		}
		else if(pass[i] >= 33 && pass[i] <= 47)
		{
			sp++;			
		}
		else if(pass[i] >= 58 && pass[i] <= 64)
		{
			sp++;
		}
		else if(pass[i] >= 91 && pass[i] <= 96)
		{
			sp++;
		}
		else if(pass[i] >= 123 && pass[i] <= 126)
		{
			sp++;
		}
		
	
	}
	
	((cp>=1) && (sm>=1) && (num>=1) && (sp>=1) && (n>=6))
		?printf("\n!! Your Password Is Strong !!")
		:printf("\n!! Your Password Is Not Strong !!");

}
