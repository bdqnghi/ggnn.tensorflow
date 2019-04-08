void replace(int*,int*);

int main()
{
	int l[5][5];
	int n,m,i,j,*p1,*p2;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&l[i][j]);
		}
	}

	scanf("%d%d",&n,&m);
	if((n>=0)&&(n<5)&&(m>=0)&&(m<5))
	{
		for(j=0;j<5;j++)
		{
			p1=*(l+m)+j;
			p2=*(l+n)+j;
			replace(p1,p2);
		}

		for(i=0;i<5;i++)
		{
			if (i!=0) printf("\n");
			for(j=0;j<4;j++)
			{
				printf("%d ",l[i][j]);
			}
			printf("%d",l[i][j]);
		}
	}else{
		printf("error");
	}

	return 0;
}

void replace(int*p1,int*p2)
{
	
	int a;

		a=*p1;
		*p1=*p2;
		*p2=a;		

}
	