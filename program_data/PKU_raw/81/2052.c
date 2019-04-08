int survival(int a[6][6],int n,int m)
{
	if(n<0||n>4||m<0||m>4) return 0;
	else
	{
		int temp,i;
		for(i=0;i<=4;i++)
		{
			temp=*(a[n]+i);
			*(a[n]+i)=*(a[m]+i);
			*(a[m]+i)=temp;
		}
		return 1;
	}
}

void main()
{
	int a[6][6],n,m,i,j,f;
	int survival(int a[6][6],int n,int m);
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			scanf("%d",a[i]+j);
	scanf("%d%d",&n,&m);
	f=survival(a,n,m);
	if(f==0) printf("error");
	else
	{
		for(i=0;i<=4;i++)
		{
			for(j=0;j<=3;j++)
				printf("%d ",*(a[i]+j));
			printf("%d\n",*(a[i]+j));
		}
	}
}
