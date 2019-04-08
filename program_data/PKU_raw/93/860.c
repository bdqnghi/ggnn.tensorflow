int main()
{
    int x;
	int a,b,c;
	int k;
	k=0;
	scanf("%d",&x);
    a=x%3;
	b=x%5;
	c=x%7;
	if(a==0)
	{
		printf("3");
		k=1;
	}

    if(b==0)
	{
		if (k==1)
			printf(" ");
		printf("5");
		k=1;
	}

	if(c==0)
	{if(k==1)
	    printf(" ");
     printf("7");
	 		k=1;
	}
	if (k!=1)
		printf("n");
        	return 0;

}
