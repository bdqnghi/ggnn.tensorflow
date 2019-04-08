
int main()
{   
 int w;
 scanf("%d",&w);
 int i,a,b;
 a=12; 
b=a%7+w;
b=b%7;
 if(b==5)
 {
 printf("1\n");
 }

 for(i=1;i<12;i++)
 {
	if(i==1||i==3||i==5||i==7||i==8||i==10)
	{
		a=31;
	    b=a%7+b; 
	b=b%7;

		if(b==5)
		printf("%d\n",i+1);
    
	}

	else if(i==2)
	{
	a=28;
	    b=a%7+b;
		b=b%7;

       if(b==5)
		printf("%d\n",i+1);
	}
		else
	{
	a=30;
	    b=a%7+b;
		b=b%7;
       if(b==5)
		printf("%d\n",i+1);
	}


	}

    
    

	return 0;
}
