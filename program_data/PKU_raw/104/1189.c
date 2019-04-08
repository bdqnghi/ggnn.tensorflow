
int x,y;
int a[1001];
int b[1001];

int main()
{
	int i,j,m;
	scanf("%d %d",&x,&y);
	while(x>=1&&y>=1)
	{
		for(i=1;i<=1001;i++)
		{
			a[i]=x;
			x=x/2;
			b[i]=y;
			y=y/2;
		}
	}
	for(i=1;i<=1001;i++)
	{
		for(j=1;j<=1001;j++)
			if(a[i]==b[j])
			{
				printf("%d\n",a[i]);
				m=1;break;
			}
			if(m==1)
				break;
	}
	return 0;
}