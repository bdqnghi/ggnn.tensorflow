
int M,N;
 
int apple(int num,int m)
{
	int i,a;
    int sum=0;
	if(num==0)
	    return sum;
	

	else
	{	if(m>num)  
		for(i=num;i>0;i--)
		{	a=m-i;
			sum+=apple(i,a);
		}
        else
		{
			sum+=1;
			num=m-1;
			sum+=apple(num,m);
		} 
		return sum;
	}
}





int main()
{
	int t,i;

	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
    int total=0;
	scanf("%d",&M);
	scanf("%d",&N);

    total=apple(N,M);

	printf("%d\n",total);
	}

	return 0;
}

	
