float average(int x[],int);
void main()
{
	int num[300],output[2];
	float	juli[300];
	int n,i,w=0,j=0;
	float aver,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	aver=average(num,n);
	for(i=0;i<n;i++)
	{
		juli[i]=fabs(aver-num[i]);
	}
	max=juli[0];
	for(i=0;i<n;i++)
	{
		if(max<juli[i])max=juli[i];
	}
	
	for(i=0;i<n;i++)
		if(juli[i]==max)
		{
			w++;
			output[j]=num[i];
			j++;
		}

	if(w==2)
		printf("%d,%d\n",output[0],output[1]);
	else printf("%d\n",output[0]);

			
	
}
float average(int x[],int n)
{
	float y;
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=x[i];
	y=((float) sum)/n;
	return y;
}

	
