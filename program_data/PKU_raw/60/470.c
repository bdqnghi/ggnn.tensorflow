int main()
{     int f(int n);
	int n,i,a[100000]={0},count=0,c;
   scanf("%d",&n);
   if(n==1||n==2||n==3||n==4)
	   printf("empty");
    else
	{for(i=3;i<=n;i++)
	{c=f(i);
	if(c)
	{a[count]=i;
	count++;
	}
	}
	}
	for(i=0;i<count;i++)
		if(a[i+1]-a[i]==2)
			printf("%d %d\n",a[i],a[i+1]);
		return 0;
	}
   int f(int n)
   {int i;
    for(i=2;i<n;i++)
		if(n%i==0)
		{return 0;break;}
     if(i>=n)
		 return 1;
   }