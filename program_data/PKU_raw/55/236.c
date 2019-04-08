void main()
{
	int a,b,x[100],y[100],i,j,k,q;
	long n=0;
	scanf("%d",&a);
	q=getchar();
	for(i=0;;i++)
	{x[i]=getchar();
	if(x[i]==' ')break;
	}
	scanf("%d",&b);
	for(j=0;j<i;j++)
	{if(x[j]>=48&&x[j]<=57)
	    x[j]=x[j]-48;
	 if(x[j]>=65&&x[j]<=90)
		x[j]=x[j]-55;
     if(x[j]>=97&&x[j]<=122)
		x[j]=x[j]-87;
	}
	for(j=0;j<i;j++)
		n=a*n+x[j];
	if(n==0)printf("0");
	for(j=0;n!=0;j++)
	{y[j]=n%b;
	n=n/b;
	if(y[j]>=10)y[j]=y[j]+55;
	else
		y[j]=y[j]+48;
	}
	for(k=j-1;k>=0;k--)
		putchar(y[k]);
	printf("\n");
}
