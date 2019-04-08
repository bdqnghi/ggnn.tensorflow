int main()
{
	int n;
	scanf("%d",&n);
    if(n==1)
		printf("End");
	else if(n==2)
		printf("2/2=1\nEnd");
	else 
	{while(n!=1)
	{if(n%2==0)
	{printf("%d/2=%d\n",n,n/2);
	if((n%2)%2==0)
		n=n/2;
	else n=3*n/2+1;
	}
	else
	{printf("%d*3+1=%d\n",n,3*n+1);
	if((3*n+1)%2==0)
		n=3*n+1;
	else n=3*(3*n+1)+1; 
	}
	}
	printf("End");
	}
    return 0;
}

