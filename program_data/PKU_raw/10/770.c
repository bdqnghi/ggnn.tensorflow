int main()
{
	int k,i,j,p,h[100]={0},m[100]={0},max=1;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&h[i]);
	}
	
	for(i=k-2;i>=0;i--)
	{
		for(j=i+1;j<k;j++)
		{
			if((h[j]<=h[i])&&(m[i]<m[j]+1))
			{
				m[i]=m[j]+1;
			}
		}
	}
	for(p=0;p<k;p++)
	{
		if(m[p]>max)   
		{max=m[p];}
	}
	printf("%d",max+1);
	return 0;
}


