int matf(int (*mat)[5],int n,int m)
{
	int temp;
	int i;

 	if(!(n>=0&&n<=4&&m>=0&&m<=4))	
		return 0;	
	else
	{
        for(i=0;i<5;i++)
		{
			temp=*(*(mat+n)+i);
			*(*(mat+n)+i)=*(*(mat+m)+i);
			*(*(mat+m)+i)=temp;
		}
		return 1;
	}
}

int main()
{
	int i,j;
	int mat[5][5];
	int n,m;
	int p;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",*(mat+i)+j);
	scanf("%d %d",&n,&m);
	p=matf(mat,n,m);
	if(p==0)
		printf("error");
	else
	{
		for(i=0;i<5;i++)
		    for(j=0;j<5;j++)
			    printf("%d%c",*(*(mat+i)+j),(j!=4)?' ':'\n');
	}
	return 0;
}