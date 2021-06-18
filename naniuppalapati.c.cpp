#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
	int id;
	char name[30],ctg[30];
	int ty[30],pr;
}s1;
int m,p=5;
FILE *fp,*fpt,*fpp;
int additem();
int disp();
int search();
int delitem();
int update();
int itemprice();
int bill();
int main()
{
int n;
printf("\t###############################################################################\n");
printf("\t********\t \twelcome to MEDICAL STORE\t\t\t*******\n");
printf("\t###############################################################################\n");
     char use[10],ch;	
     int i;
	 printf("\nEnter the login id-");
	 scanf("%s",&use);
	 if(stricmp(use,"varma")==0)
	 {
	 printf("\nEnter the password-");	
	char a[]="12345";
	int c=strlen(a);
	char b[13];
	for(i=0;i<c;i++)
	{
		b[i]=getch();
		putchar('*');
	}
	getch();
	b[i]='\0';
	{
		if(strcmp(a,b)==0)
		{
			for(i=0;i<5;i++)
			{
	    printf("\n\t\t ACCESS GRANTED.....\n");
	    printf("\t\tWELCOME\n");
	    A:
 	
printf("Select an option\n1.ADD ITEM\n2.DISPLAY ITEM\n3.SEARCH ITEM\n4.DELETE ITEM DATA\n5.UPDATE ITEM PRICE\n6.VIEW ITEM ACCORDING TO PRICE\n7.GENERATE BILL\n8.Exit\n\n");
scanf("%d",&n);
switch(n)
{
case 1:
additem();
printf("\n\t\tFOR MAIN MENU PRESS Y \n\t\t FOR EXIT PRESS ANY KEY\n");
	ch=getch();
	{
	if(ch=='y'||ch=='Y')
	goto A;
	else
	goto B;
    }
	B:	
	break;	
case 2:
disp();
printf("\n\t\tFOR MAIN MENU PRESS Y or FOR EXIT PRESS ANY KEY\n");
	ch=getch();
	{
	if(ch=='y'||ch=='Y')
	goto A;
	else
	goto C;
    }
	C:
	break;	
case 3:
search();
printf("\n\t\tFOR MAIN MENU PRESS Y or FOR EXIT PRESS ANY KEY\n");
	ch=getch();
	{
	if(ch=='y'||ch=='Y')
	goto A;
	else
	goto D;
    }
	D:
	break;	
case 4:
delitem();
printf("\n\t\tFOR MAIN MENU PRESS Y or FOR EXIT PRESS ANY KEY\n");
	ch=getch();
	{
	if(ch=='y'||ch=='Y')
	goto A;
	else
	goto E;
    }
	E:
	break;	
case 5:
update();
printf("\n\t\tFOR MAIN MENU PRESS Y or FOR EXIT PRESS ANY KEY\n");
	ch=getch();
	{
	if(ch=='y'||ch=='Y')
	goto A;
	else
	goto F;
    }
	F:
	break;	
case 6:
itemprice();
printf("\n\t\tFOR MAIN MENU PRESS Y \n\t\t FOR EXIT PRESS ANY KEY\n");
	ch=getch();
	{
	if(ch=='y'||ch=='Y')
	goto A;
	else
	goto G;
    }
	G:
	break;		
case 7:
bill();
printf("\n\t\tFOR MAIN MENU PRESS Y \n\t\t FOR EXIT PRESS ANY KEY\n");
	ch=getch();
	{
	if(ch=='y'||ch=='Y')
	goto A;
	else
	goto H;
    }
	H:
	break;	
case 8:
exit(0);
break; 	
}
}
}
else
printf("\nInvalid USER");
}	
}
else
printf("\nincorrect id name\n");
}
int additem()
{
	int i,n,j;
	fp=fopen("item.txt","a");
	printf("Enter the number of items want to add to your list \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\n\t\tEnter the data\n");
    printf("\tEnter the Id : ");
    scanf("%d",&s1.id);
    printf("\n\tEnter the item Name: ");
    scanf("%s",s1.name);
    printf("\n\tEnter the category: ");
    scanf("%s",s1.ctg);
    printf("\n\tEnter the self: ");
    scanf("%s",s1.ty);
    printf("\n\tEnter the price: ");
    scanf("%d",&s1.pr);
    fwrite(&s1,sizeof(s1),1,fp);
	printf("\n\t\t ITEM DATA ADDED SUCCESSFULLY\n");	
	}
	fclose(fp);
}
int disp()
{
	int n,i,j,f,k;
	fp=fopen("item.txt","r");
	if(fp==NULL)
	{
	printf("Can't open file\n");
    }
	else
	{
	printf("\n\nPRESS 1 .FOR ALL DATA ELSE PRESS\n 2. FOR PARTICULAR DATA\n");
	scanf("%d",&n);
	if(n==1)
	{
	for(m=0;m<p;m++)
	{
	fread(&s1,sizeof(s1),1,fp);	
	printf("\n\n\t\tThe item data is: \n");
	printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe Category : %s\n",&s1.ctg);
	printf("\t base No : %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);	
    }
    }
    else if(n==2)
	{
	printf("\nEnter the item  id u want to search\n");
	scanf("%d",&f);
	for(m=0;m<p;m++)	
	{
	fread(&s1,sizeof(s1),1,fp);	
	
    }
    if(s1.id==f)
	{
    printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe Category : %s\n",&s1.ctg);
	printf("\t base No: %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);	
    }
	else
	{
	printf("Invalid id\n");	
	}
    }
    }
	fclose(fp);
}
int search()
{
	int n,i,j,f,k,l;
	fp=fopen("item.txt","r");
	printf("Enter the item id u want to search\n");
	scanf("%d",&f);
	for(m=0;m<p;m++)
	{
    fread(&s1,sizeof(s1),1,fp);
	if(s1.id==f)
	{
	break;
    }   
    }
    if(s1.id==f)
	{
	printf("\tFOUND\n");	
	printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe Category: %s\n",&s1.ctg);
	printf("\tThe base No: %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);		
	}
	else
	{
	printf("Invalid id\n");	
	}
	fclose(fp);
}
int delitem()
{
	fp=fopen("item.txt","r");
	
	fpt=fopen("item1.txt","w");
	int n,i,j,f,k,l;
	printf("Enter the item id u want to delete\n");
	scanf("%d",&f);
	if(fp==NULL)
	{
		printf("can't open the file\n");
	}
	else
	{
	for(m=0;m<p;m++)
	{
		fread(&s1,sizeof(s1),1,fp);
		if(s1.id==f)
		{
     	l++;
	    }
	    else
	    {
	    fwrite(&s1,sizeof(s1),1,fpt);	
		}
    }
    }
    fclose(fpt);
    fclose(fp);
    fpt=fopen("item1.txt","r");
    fp=fopen("item.txt","w");
     while(!feof(fpt))
    {
    fread(&s1,sizeof(s1),1,fpt);
    fwrite(&s1,sizeof(s1),1,fp);
    }
    printf("\tRECORD IS DELETED\n");
    fclose(fpt);
    fclose(fp); 
}
int update()
{
	int n,i,j,f,l;
	fp=fopen("item.txt","r");
	fpp=fopen("item2.txt","w");
	printf("Enter the item id u want to update\n");
	scanf("%d",&f);
	for(m=0;m<p;m++)
    {	
    fread(&s1,sizeof(s1),1,fp);
	if(s1.id!=f)
	{

	fwrite(&s1,sizeof(s1),1,fpp);
    }
    else
	{	
	printf("\tENTER THE NEW PRICE :");
	scanf("%d",&s1.pr);
	printf("\n\tNEW DETAILS ARE : \n");
    printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe Category : %s\n",&s1.ctg);
	printf("\t base number : %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);
	printf("\n\t\tupdated\n");
    fwrite(&s1,sizeof(s1),1,fpp);  
    }
    }
    rewind(fp);
    rewind(fpp);
    fclose(fp);
    fclose(fpt);
    fpp=fopen("item2.txt","r");
    fp=fopen("item.txt","w");
    while(!feof(fpp))
    {
    fread(&s1,sizeof(s1),1,fpp);
	fwrite(&s1,sizeof(s1),1,fp);
    }
     fclose(fp);
     fclose(fpt);
}
int itemprice()
{
	int n,i,j,p,t;
	fp=fopen("item.txt","r");
	printf("Enter how u want to search:\n PRESS 1 FOR ASCENDING OR 2 FOR DESCENDING\n");
	scanf("%d",&n);
	fread(&s1,sizeof(s1),1,fp);
	t=s1.pr;
	rewind(fp);
	if(n==1)
	{
	printf("\n\t\tAscending view:\n");
		for(m=0;m<p;m++)
	    {
	    fread(&s1,sizeof(s1),1,fp);
		if(t>s1.pr)
		{
	printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe Category : %s\n",&s1.ctg);
	printf("\tbase No: %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);	
		}
		else if(t==s1.pr)
		{
	printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe Category : %s\n",&s1.ctg);
	printf("\tbase No : %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);	
		}
       }
    }
   else if(n==2)
	{
		rewind(fp);
	printf("\n\t\tDescending view:\n");
	   for(m=0;m<p;m++)
	    {
	    fread(&s1,sizeof(s1),1,fp);	
		if(t<s1.pr)
		{
	printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe Category : %s\n",&s1.ctg);
	printf("\tbase no: %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);	
		}
		else if(t==s1.pr)
		{
		printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe category : %s\n",&s1.ctg);
	printf("\t base number : %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);	
	   }
	   else if(t>s1.pr)
	   {
		printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe category : %s\n",&s1.ctg);
	printf("\t base number : %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);	
	   }
    }
    }
	else
	printf("Invalid id\n");	
}
int bill()
{
	int n,i,j,f,k,sum=0;
	fp=fopen("item.txt","r");
	printf("\n\t\tTHE MENU IS :");
	for(m=0;m<p;m++)
	{
	fread(&s1,sizeof(s1),1,fp);	
	printf("\n\n\t\tThe item data is: \n");
	printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe category : %s\n",&s1.ctg);
	printf("\t  number : %s\n",&s1.ty);
	printf("\tThe Price : %d\n",s1.pr);	
	}	
	rewind(fp);
	printf("Enter the item id which is bought\n");
	scanf("%d",&f);
	printf("Enter How many item are bought\n");
	scanf("%d",&n);
    for(m=0;m<p;m++)
	{
	fread(&s1,sizeof(s1),1,fp);	
	for(j=0;j<n;j++)
	{
	if(s1.id==f)
	sum=sum+s1.pr;
	}
    }
    rewind(fp);
    for(m=0;m<p;m++)
	{
	fread(&s1,sizeof(s1),1,fp);
	if(s1.id==f)
	{
	printf("\tTHE DETAILS ARE : \n");
    printf("\tThe Id : %d\n",s1.id);
    printf("\tThe Name : %s\n",&s1.name);
	printf("\tThe Price : %d\n",s1.pr);	
	break;	
	}
	else
	{
	printf("Invalid id\n");	
	}
    }
    fclose(fp);
    printf("\n\n\tTHE TOTAL BILL IS : %d\n\n\t\tTHANK YOU DOODS",sum);
}

