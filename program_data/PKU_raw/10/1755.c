int analyse(int *,int *,int,int);
int main()
{
	int k;
	int height[25],numbers[25]={0};
	int i,max,temp;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",height+i);
	max=numbers[24]=1;
	for(i=23;i>=0;i--)
	{
		temp=analyse(height,numbers,i,k);
		if(temp>max)	max=temp;
	}
	printf("%d\n",max);
	return 0;
}
int analyse(int *height,int *numbers,int seq,int k)
{
	int max=0,temp,i;
	for(i=k-1;i>seq;i--)
	{
		if(height[seq]>=height[i])
		{
			temp=numbers[i];
			if(temp>max) max=temp;
		}
	}
	max++;
	numbers[seq]=max;
	return max;
}
