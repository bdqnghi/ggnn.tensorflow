int main()
{
	int mingliu(int k,int **pp,int n,int count);
	int**pp,n,mingliushu=0;
	scanf("%d",&n);
	pp=(int**)malloc(sizeof(int*)*n*n+1);
	int q=0;  
	while(1)
	{
       pp[q]=(int *)malloc(sizeof(int)*2);
	   scanf("%d %d",pp[q],pp[q]+1);
	   if(*pp[q]==0&&*(pp[q]+1)==0)
		   break;
       q++;
	}
    for(int i=0;i<q;i++)
	{
		if(*(pp[i]+1)>=0)
		mingliushu+=mingliu(*(pp[i]+1),pp,n,q);
	}
	if(mingliushu==0)
		printf("NOT FOUND");
	free(pp);
	pp=NULL;
	return 0;
}



int mingliu(int k,int **pp,int n,int count)//k??????????????
{
	int *a;
	a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		*(a+i)=0;
	int value=1;
			for(int j=0;j<count;j++)
			{
				if(*(pp[j]+1)==k)
				{
					*(pp[j]+1)=-k-1;
					*(a+pp[j][0])=1;

				}
			}
			*(a+k)=1;
			for(int j=0;j<n;j++)
			{
				if(*(a+j)==0)
				{
					value=0;
					break;
				}
			}
			if(value==1)
				printf("%d",k);
			free(a);
return value;
}