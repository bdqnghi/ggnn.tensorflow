int main()
{
	int n,i,k=0,t[3]={3,5,7},f=0;
	scanf("%d",&n);
	
for(i=0;i<3;i++)	
{	if(n%t[i]==0)
		
	k=k+1;}
	if(k==0)
		printf("n");
	else
	{
	for(i=0;i<3;i++)
	{
		if(n%t[i]==0)
		{	printf("%d",t[i]);
		f++;
		
		if(f<k&&f>=1)
			printf(" ");}
		
	}}

	return 0;
}
 
