struct hou
{int b;
struct hou * p;
}hou[400];
void main()
{
	int a[400][2],i,j,n=0,k,h,m,t;
	struct hou * q;
	struct hou * x;
	for(i=0;;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
		n=n+1;
		if(a[i][0]==0&&a[i][1]==0)
			break;
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i][0]==1)
			printf("1\n");
		if(a[i][1]==1)
			printf("%d\n",a[i][0]);
		if(a[i][0]!=1&&a[i][1]!=1)
		{
		k=a[i][0]-1;
		for(j=0;j<a[i][0]-1;j++)
		{
			hou[j].b=j+1;
		    hou[j].p=&hou[j+1];
		}
		hou[k].p=&hou[0];
		hou[k].b=k+1;
		q=&hou[0];
		for(h=0;h<a[i][0]-1;h++)
		{
			for(m=1;m<a[i][1]-1;m++)
			{
				q=q->p;
			}
			x=q->p;
			q->p=x->p;q=q->p;
		if(q==q->p)
			printf("%d\n",(*q).b);
		}
	}
	}
}