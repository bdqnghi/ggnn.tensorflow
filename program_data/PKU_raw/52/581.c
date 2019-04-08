int main(int argc, char* argv[])
{
	int n,m,i,j,t,r,l;
	int num[100];
	scanf("%d""%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(j=0;j<m;j++)
	{
		t=num[n-1];
		for(r=n-2;r>=0;r--)
		{
			num[r+1]=num[r];
		}
		num[0]=t;
	}
	for(l=0;l<n;l++)
	{
              if(l>0)
{
	 	printf(" %d",num[l]);
}
else
{printf("%d",num[l]);}
	}

    return 0;
}