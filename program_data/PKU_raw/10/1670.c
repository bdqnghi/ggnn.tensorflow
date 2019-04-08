int dert(int,int);
void main()
{
	int k,missile[25],i,result,donemax[25];
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&missile[i]);
	donemax[k-1]=1;
	for(i=k-2;i>=0;i--)
	{
		int max=dert(missile[i],missile[i+1])*donemax[i+1],j;
		for(j=1;j<k-i;j++)
			if(max<dert(missile[i],missile[i+j])*donemax[i+j])
				max=dert(missile[i],missile[i+j])*donemax[i+j];					
		donemax[i]=max+1;
	}
	result=donemax[k-1];
	for(i=k-2;i>=0;i--)
	{
		
		if(donemax[i]>result)result=donemax[i];
	}
	printf("%d\n",result);
}
int dert(int x,int y)
{
	int z;
	if(x>=y)z=1;
	else z=0;
	return z;
}