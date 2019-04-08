void main()
{   int result(int m,int n);
	int m,n,k,i,a[100];
   scanf("%d",&k);
   for(i=0;i<k;i++)
   {scanf("%d%d",&m,&n);
   a[i]=result(m,n);
   }
   for(i=0;i<k;i++)
	   printf("%d\n",a[i]);
}
int result(int m,int n)
{   int x;
	if(n==1)
    x=1;
	else
	{if(m>n)
	x=result(m,n-1)+result(m-n,n);
	 else if(m==n)
	 x=result(m,n-1)+1;
	 else x=result(m,n-1);
	}
	return(x);
}