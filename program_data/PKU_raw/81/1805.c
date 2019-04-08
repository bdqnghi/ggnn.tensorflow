int x(int p1,int p2)
{
	if(p1>=0 && p1<=4 && p2>=0 && p2<=4) return 1;
	else return 0;
}
int main()
{
	int i,j,n,m,t,y,a[5][5];
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
		{scanf("%d",&a[i][j]);}
	}
	scanf("%d %d",&n,&m);
	y=x(n,m);
	if(y)
	{for(i=0;i<5;i++)
		{t=a[n][i];
		 a[n][i]=a[m][i];
		 a[m][i]=t;
		}
	 for(i=0;i<5;i++)
	 {printf("%d",a[i][0]);
	  for(j=1;j<5;j++)
	  {printf(" %d",a[i][j]);}
	  printf("\n");
	 }
	}
	else printf("error\n");
	return 0;
}