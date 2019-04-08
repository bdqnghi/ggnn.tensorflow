int main()
{
int i,j,n,k,a=0;
scanf("%d",&n);
scanf("%d",&k);
int *sz=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		
	}
for(i=0;i<n;i++)
{
	
	for(j=0;j<n;j++)
		{if(j==i)
		{continue;}
	
		if((sz[i]+sz[j])==k)
		{a++;}}
}
if(a>0)
{printf("yes");}
if(a==0)
{printf("no");}
	return 0;
}