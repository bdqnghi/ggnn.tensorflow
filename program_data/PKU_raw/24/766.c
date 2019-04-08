void main()
{
	char x[10000];
	int a[10000]={0},b[10000]={0},i,j=1,k,max,m=0,n=10000,min,y,p,q;
	gets(x);
	k=strlen(x);
	*(x+k)=' ';
	*a=-1;
	for(i=0;i<k+1;i++)
	{
		if(x[i]==' ')
		{
			*(a+j)=i;
			j=j+1;
		}
	}
	/*for(y=0;y<j;y++)
		printf("%d ",a[y]);
	printf("\n");*/
	for(i=0;i<j-1;i++)
		*(b+i)=*(a+i+1)-*(a+i);
	/*for(y=0;y<j-1;y++)
		printf("%d ",b[y]);
	printf("\n");*/
	for(i=j-2;i>-1;i--)
	{
		if(m<=*(b+i))
		{
			m=*(b+i);
			max=i;
		}
		if(n>=*(b+i))
		{
			n=*(b+i);
			min=i;
		}
	}
	/*printf("%d %d %d %d\n",max,min,m,n);*/
	p=*(a+max+1);
	q=*(a+max);
	/*printf("%d %d\n",p,q);*/
	for(k=q+1;k<p;k++)
		printf("%c",x[k]);
	printf("\n");
	p=*(a+min+1);
	q=*(a+min);
	for(k=q+1;k<p;k++)
		printf("%c",*(x+k));
	printf("\n");
}
