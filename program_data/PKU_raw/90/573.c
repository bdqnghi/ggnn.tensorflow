int func(int M,int N)
{
	int ans;
	if(N==1)
        ans=1;
	else if(M>N) 
	    ans=func(M,N-1)+func(M-N,N);
	else if(M==N)
	    ans=func(M,N-1)+1;
	else
		ans=func(M,N-1);
	return ans;
}
int main()
{
	int m,n,t,i,k[20];
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		k[i]=func(m,n);
	}
	
	for(i=0;i<t;i++)
		printf("%d\n",k[i]);
	return 0;
}


