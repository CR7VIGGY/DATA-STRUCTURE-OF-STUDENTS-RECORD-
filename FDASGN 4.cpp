//VIGHNESH TIWARI , 4252 , AIT PUNE , INDIA
//GITHUB PROFILE : CR7VIGGY
#include<stdio.h>
#include<conio.h>

int enter(int);
void display(int);
void edit(int);
void particular(int);
int del(int);

	struct student
	{
	    int roll;
	    char name[50];
		int i;
	    char year[10];
	    char aname[50];
	    union prize
	    {
	        char m[50];
	        int cash;
	
	    }u;
	    } s[60],s1[60];

		int main()
		{
		  int x,b=0,c,d,e,f;
		
		do
		{
		printf("\n press 1 to enter record");
		printf("\n press 2 to show record ");
		printf("\n press 3 to edit");
		printf("\n press 4 to display particular record");
		printf("\n press 5 to delete record");
		printf("\n press 6 to exit ");
		scanf("%d",&x);
		switch(x)
		{
		    case 1 : b=enter(b); break;
		    case 2 : display(b); break;
		   	case 3 : edit(b); break;
		    case 4 : particular(b); break;
		    case 5 : b=del(b); break;
		}
		}while(x!=6);
		}
			int enter(int b)
			{
				int x;
				printf("\n Enter roll no ");
				scanf("%d",&s[b].roll);
				printf("\n Enter name ");
				scanf("%s",&s[b].name);
				printf("\n Enter Year ");
				scanf("%s",&s[b].year);
			/*	printf("\n Enter Activity Name ");
				scanf("%s",&s[b].aname);
				printf("\n select 1.Prize or\n 2.Momento\n");
				scanf("%d",&s[b].i);
				if(s[b].i==1)
				    scanf("%d",&s[b].u.cash);
				else if(s[b].i==2)
				    scanf("%s",&s[b].u.m);*/
				
				b++;
				return(b);
			}

				void display(int b)
				{
					 int c;
					printf("Roll no  \t");
					printf("name  \t");
					printf("year  \t\n");
					//printf("activity name  \t");
				//	printf("prize cash/mommento\n");
					for(c=0;c<b;c++)
					{
					    printf("%d\t\t",s[c].roll);
					printf(" %s\t",s[c].name);
					printf(" %s\t",s[c].year);
					printf(" %s\t\t",s[c].aname);
				/*	if(s[c].i==1)
					printf(" %d\t  \t",s[c].u.cash);
					else if(s[c].i==2)
					    printf("%s\t \t",s[c].u.m);*/
					printf("\n");
				}
				}

					void edit(int b)
					{
					    int x,y,z;
					    printf("\n enter student roll no you want to edit = ");
					    scanf("%d",&x);
					    printf("enter feild you want to edit \t 1.Name \t 2.year \t 3.Activity Name\t");
					    scanf("%d",&y);
					    switch(y)
					    {
					        case 1: printf("Enter New Name"); for(z=0;z<b;z++) { if(s[z].roll==x) scanf("%s",&s[z].name); } break;
					        case 2: printf("Enter New Year"); for(z=0;z<b;z++) { if(s[z].roll==x) scanf("%s",&s[z].year); } break;
					       // case 3: printf("Enter New Activity name"); for(z=0;z<b;z++) { if(s[z].roll==x) scanf("%s",&s[z].aname); } break;
					    }
					}
						void particular(int b)
						{
						    int x,y,z;
						    printf("\nEnter roll no to view record\n");
						    scanf("%d",&x);
						    printf("Rollno\t");
						  printf("Name\t");
						printf("Year\t\n");
						
					//	printf("Activity Name\n");
						    for(z=0;z<b;z++) 
							{ 
								if(s[z].roll==x)
						     	{
							        printf("%d\t",s[z].roll);
									printf(" %s\t  \t",s[z].name);
									printf(" %s\t  \t",s[z].year);
									printf(" %s\t  \t",s[z].aname);
									
								}
							}
					/*	printf(" %d\t  \t",s[z].u.cash);
						else if(s[z].i==2)
						    printf("%s\t \t",s[z].u.m);*/
						
						
						
						
						}

							int del(int b)
							{
							    int x,y,z,i,j,k;
							    printf("\nwhich student roll no you want to delete \n");
							    scanf("%d",&y);
							    
									for(i=0;i<b;i++)
							{
							s1[i]=s[i];
							if(s[x].roll==y) z=x;
							}
							    for(i=z;i<b;i++)
							    {
							        s[i]=s1[i+1];
							    }
							       for(i=0;i<b;i++)
							{
							s1[i]=s[i];
							
							}
							b--;
							return(b);
							}
