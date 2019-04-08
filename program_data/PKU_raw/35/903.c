int main()
{
	int a[8][8],max[8],min[8],arrow[8]={0},low[8]={0};
	int m,n,i,j,p;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	}

	for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
	{max[i]=a[i][0];
	if(a[i][j]>max[i])
	{max[i]=a[i][j];
	arrow[i]=j;}
	}
	}
	for(j=0;j<n;j++)
	{for(i=0;i<m;i++)
	{min[j]=a[0][j];
	if(a[i][j]<min[j])
	{min[j]=a[i][j];  
	low[j]=i;}
	}
	}

	for(i=0,p=0;i<m;i++)
	{for(j=0;j<n;j++)          
	{if(max[i]=min[j]&&low[j]==i&&arrow[i]==j)
	{p=1;
		printf("%d+%d",i,j);
	break;}
	}
	}
	
	if(p==0)
		printf("No");
	return 0;
}