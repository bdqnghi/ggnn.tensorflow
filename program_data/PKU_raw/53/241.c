int main()
{
int i,j,k,n,x[100];
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
    scanf("%d",&x[i]);
	if(i==0)
		printf("%d",x[i]);
	else
	{
	   for(j=0,k=0;j<=i-1;j++)
		   if(x[j]!=x[i])
			   k++;
	   if(k==i)
	   printf(",%d",x[i]);
	}
}
printf("\n");
}