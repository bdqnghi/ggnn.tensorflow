
int check(int n,int m);
void swap(int *a,int *b);

void main()
{
	int o[5][5];
	int n,m;
	int i,j,c;
	int *x,*y;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			scanf("%d",&o[i][j]);
		}
	scanf("%d%d",&n,&m);
	c=check(n,m);
	if(c==0) printf("error");
	else 	
	{
		for(i=0;i<5;i++)
		{
		 x=&o[n][i];
	     y=&o[m][i];
		 swap(x,y);
		}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<4)	printf("%d ",o[i][j]);
			else printf("%d",o[i][j]);
		}
		printf("\n");
	}
	}
}

int check(int n,int m)
{
	int q=0;
	if(n<5&&m<5) q=1;
	else q=0;
	return(q);
}
		
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}