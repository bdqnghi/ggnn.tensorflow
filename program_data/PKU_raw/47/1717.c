void main()
{int *i,*j,n,x[100],y[100];
 scanf("%d",&n);
 for (i=x;i<x+n;i++)
	 scanf("%d",i);
 for (j=y,i=i-1;i>=x;i--,j++)
	 *j=*i;
 for (i=x,j=y;i<x+n;i++,j++)
	 *i=*j;
 for (i=x;i<x+n-1;i++)
	 printf("%d ",*i);
 printf("%d",*i);
}