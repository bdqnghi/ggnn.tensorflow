void main()
{
    int b,m,b2,t,i,j,k,sum=0,d[1001];
	int a[100];
	scanf("%d %d",&b2,&b);
	for(m=b2;m<=b;m++)
	{
		    k=(int)sqrt(m);
			for(i=2;i<=k;i++)
			{
				if(m%i==0) break;

			}
			if(i>=k+1) 
			{
				t=m;

	      for(i=0;;i++)
		{
		if(t!=0)
		{
			a[i]=t%10;
			t=t/10;
		}
       else break;
		}
	for(j=0;j<=i-1;j++)
        if(a[j]!=a[i-1-j]) break;
    if(j>=i)
		{
           sum++;
		   d[sum]=m;
		}

	}


	}
	if(sum==0) printf("no");

	else {for(i=1;i<sum;i++)  
		printf("%d,",d[i]);
	printf("%d",d[sum]);}
         }

