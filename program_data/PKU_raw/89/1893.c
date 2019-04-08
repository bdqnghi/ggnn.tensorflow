int main()
{
	int n;
	scanf("%d",&n);
	int *p=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		p[i]=1;
	int *q=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		q[i]=-1;
	int m;
	scanf("%d",&m);
	scanf("%d",&q[m]);
	while(q[m]!=0||m!=0)
		{
		p[m]=0;
		scanf("%d",&m);
		scanf("%d",&q[m]);	
		}
	int judge=0;
	for(int i=0;i<n;i++)
		if(p[i]==1)
			{
			printf("%d",i);
			judge=1;	
			}
	if(judge==0)
		printf("NOT FOUND");
		   
}