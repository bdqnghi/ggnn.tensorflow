int f(int a[5][5],int n,int m)
{ int i,t;
	if((n>=0&&n<5)&&(m>=0&&m<5))
	{	for(i=0;i<5;i++)
		{t=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=t;
		}
	return 1;
	}
	
 return 0;
	}
int main()
{   int a[5][5],m,n;
    int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
    scanf("%d%d",&n,&m);
	if(f(a,n,m))
	{
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{if(j!=4)
				printf("%d ",a[i][j]);
			else printf("%d\n",a[i][j]);
			}
	}
	else printf("error");
	return 0;
}

