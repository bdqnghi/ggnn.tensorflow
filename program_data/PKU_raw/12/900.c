int main()
{int a[17]={0};
int i=0,m=0,k=0,j=0;
do{
	scanf("%d",&a[0]);
	while(a[i]!=0&&a[0]!=-1)	
	{
		i=i+1;
		scanf("%d",&a[i]);
	}
	if(a[0]!=-1)
	{
		for(j=0;j<i;j++)
		{
			for(k=i-1;k>j;k--)
			{
				if(a[k]==2*a[j]||a[j]==2*a[k])
					m=m+1;
			}
		}
		printf("%d\n",m);
	}
	for(j=0;j<i;j++)
		a[j]=0;
	m=0;
	i=0;
  }
while(a[0]!=-1);
}