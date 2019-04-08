

int main()
{
    int n,f,i,j,b=0,c=0,m=0;
	int s[100];
	for(f=0;f<100;f++)
	{s[f]=0;}
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{b=i/10;
     c=i-b*10;
	 if(b!=7&&c!=7&&i%7 != 0)
	   s[i]=i;
	 
	}

	for(j=1;j<=n;j++)
	{m=m+s[j]*s[j];
	}
	printf("%d",m);
	return 0;
}

