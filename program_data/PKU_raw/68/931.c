int prime(int s)
{
	int k;
	if(s%2==0)
		return 0;
	for(k=1;k<=sqrt(s)/2;k++)
	{
		if(s%(2*k+1)==0)
			return 0;
	}
	return 1;
}
int main(int argc, char* argv[])
{
	int n,i,j;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
	   for(j=3;j<=i;j++)
	   {
		 if((prime(j)==1)&&(prime(2*i-j)==1))
		 {
			 printf("%d=%d+%d\n",2*i,j,2*i-j);
			 break;
		 }
	   }
	}


	return 0;
}