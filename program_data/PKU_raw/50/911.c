int main()
{
	int n,i,j,k=0,pan;
	scanf("%d",&n);
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31},ans[12];
	n+=12;
	for(i=0;i<=11;i++)
	{
		pan=n;
		for(j=0;j<i;j++)
		{
			pan+=mon[j];
		}
		if(pan%7==5)
		{
			ans[k]=i+1;
			k++;
		}
	}
	for(i=0;i<k;i++)
		printf("%d\n",ans[i]);
	return 0;
}
	    
