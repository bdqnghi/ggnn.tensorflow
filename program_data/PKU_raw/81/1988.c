void main()
{
	int a[5][5],*p[5],m,n,i,j,k;
	int f(int *q[4],int x,int y);
	for(i=0;i<5;i++)
		p[i]=*(a+i);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",p[i]+j);
	scanf("%d%d",&n,&m);
	k=f(p,n,m);
	
	if(k==0)
		printf("error");
	else
	{
for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(j<4)
			{
			printf("%d ",*(p[i]+j));
			}
			else
				printf("%d\n",*(p[i]+4));
		}
	}
		

}
int f(int *q[4],int x,int y)
{
	int *t,z;
	if(x<5&&y<5)
	{
		z=1;
		t=q[x];
		q[x]=q[y];
		q[y]=t;
	}
	else
		z=0;
	return(z);
}