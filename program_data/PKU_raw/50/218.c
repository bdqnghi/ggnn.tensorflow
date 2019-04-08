int main()
{
	int a[365],n,i,j=0,k,b[100];
	scanf("%d",&n);
    for(i=0;i<7;i++)
	{
		a[i]=n;
        n++;
		if(n==8) break;
	}
	k=i;
	n=1;
	for(i=k+1;i<365-k;i++)
	{
		a[i]=n;
	    n++;
		if(n==8) 
		{
			n=1;
		}
	}
	for(i=0;i<365;i++)
	{
		if(a[i]==5) 
		{
			b[j]=i+1;
			j++;
		}
	}
    for(i=0;i<100;i++)
	{
		if(b[i]==13) printf("1\n");
		else if(b[i]==44) printf("2\n");
		else if(b[i]==72) printf("3\n");
		else if(b[i]==103) printf("4\n");
		else if(b[i]==133) printf("5\n");
		else if(b[i]==164) printf("6\n");
		else if(b[i]==194) printf("7\n");
		else if(b[i]==225) printf("8\n");
		else if(b[i]==256) printf("9\n");
		else if(b[i]==286) printf("10\n");
		else if(b[i]==317) printf("11\n");
		else if(b[i]==347) printf("12\n"); 
	}
	return 0;
}