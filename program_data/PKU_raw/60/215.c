int sushu(int x)
{
	int i=2;
	int j;
	if(x<=1)
		return 0;
	else
	{
		j=0;
       while(i<=x/2)
	   {
		  if(x%i==0)
		   j++;
		   i++;
	   }
	   if(j==0)
	       return 1;
	   else
		   return 0;
	}
}
void main()
{
	int n;
	int i=1;
	int k=0;
	scanf("%d",&n);
	while(i<n-1)
	{
		if((sushu(i)==1)&&(sushu(i+2)==1))
		{
		printf("%d %d\n",i,i+2);
		k++;
		}
		i=i+2;
	}
	if(k==0)
		printf("empty");
}
