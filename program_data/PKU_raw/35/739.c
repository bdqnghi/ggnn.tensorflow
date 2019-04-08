int main()
{
int n[8][8],m[8][8];
int i,j,a,c=0,b,t=0,p,q;
scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		m[i][j]=0;
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		scanf("%d",&n[i][j]);
	}
for(i=0;i<a;i++)
{
	int x=0;
	for(j=0;j<b-1;j++)
	{
		if(n[i][x]<n[i][j+1]) x=j+1;
	}
	m[i][x]=1;
}
for(j=0;j<b;j++)
{
	int y=0;
	for(i=0;i<a-1;i++)
	{	
		if(n[y][j]>n[i+1][j]) y=i+1;
	
	}
	m[y][j]++;
}
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		if(m[i][j]==2) 
		{
			t=1;
			p=i;q=j;
		}
	}
}
if(t==1) printf("%d+%d",p,q);
else printf("No");
return 0;
}
