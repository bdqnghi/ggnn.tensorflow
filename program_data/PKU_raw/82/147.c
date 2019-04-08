int main()
{
	int n,i,k,cs[100]={0},t=0,max;
	int gao[100],di[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&gao[i],&di[i]);
	}
	for(i=0;i<n;i++)
	{
		if(gao[i]>=90&&gao[i]<=140&&di[i]>=60&&di[i]<=90)
		{
			cs[t]++;
		}
		else
		{
			t++;
		}
	}
	for(i=1;i<t+1;i++)
	{
       for(k=0;k<t+1-i;k++)
	   {
		   if(cs[k]>cs[k+1])
		   {
			   max=cs[k+1];
			   cs[k+1]=cs[k];
			   cs[k]=max;
		   }
	   }
	}
	printf("%d",cs[t]);
	return 0;
}