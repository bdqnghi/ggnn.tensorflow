int main()
{
	int a[100][100],b[100][100],c[100][100]={0},i,j,m,a1,a2,b1,b2,c1,c2;
cin>>a1>>a2;
for(i=0;i<a1;i++)
{
	for(j=0;j<a2;j++)
	{
		cin>>a[i][j];
	}
}
cin>>b1>>b2;
for(i=0;i<b1;i++)
{
	for(j=0;j<b2;j++)
	{
		cin>>b[i][j];
	}
}
c1=a1;
c2=b2;
for(i=0;i<c1;i++)
{
	for(j=0;j<c2;j++)
	{
        for(m=0;m<a2;m++)
		{
		    c[i][j]=c[i][j]+a[i][m]*b[m][j];
		}
	}
}
for(i=0;i<c1;i++)
{
	for(j=0;j<c2;j++)
	{
		printf("%d",c[i][j]);
		if(j==c2-1)printf("\n");
		else printf(" ");
	}
}
return 0;
}

 
