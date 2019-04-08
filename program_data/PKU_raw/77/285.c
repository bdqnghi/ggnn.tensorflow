int a[10000]={1};
int num;
int cal(int a[]);
int main()
{
	char x,y;
	int k;
	scanf("%c",&x);
	for(k=1;k<=10000;k++)
	{
		scanf("%c",&y);
		if(y=='\n')
		{
			a[k]=-1;
			num=k;
			break;
		}
		if(x==y) a[k]=1;
		else a[k]=0;
	}
	cal(a);
	return 0;
}

int cal(int a[])
{
	int i,j;
	if(a[0]==-1)
		return 0;
	else
	{
		for(i=0;i<=num;i++)
		{
			if(a[i]==0)
			{
				for(j=i;j>=0;j--)
				{
					if(a[j]==1)
					{
						printf("%d %d\n",j,i);
						a[i]=-1;
						a[j]=-1;
						cal(a);
					}
				}
			}
		}
	}
	return 0;
}
