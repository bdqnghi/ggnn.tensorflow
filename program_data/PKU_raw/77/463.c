
int main(int argc, char* argv[])
{
	char a[1000],x,y;
	int i=0,j,n,k=1;
	while(scanf("%c",&a[i])==1)
	{
		if(k&&a[i]!=a[0])
		{
			y=a[i];
			k=0;
		}
		i++;
	}
	n=i-1;
	x=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]==y&&a[i]!=0)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]==x) 
				{
					printf("%d %d\n",j,i);
					a[j]=0;
					a[i]=0;
					break;
				}
			}
		}
	}

}