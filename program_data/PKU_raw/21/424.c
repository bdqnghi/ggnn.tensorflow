
int n;
int num[100];
int i;
int min=10000,max=-1,total=0;
int main(void)
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]<min)
			min=num[i];
		if(num[i]>max)
			max=num[i];
		total+=num[i];
	}
	if(total-min*n==max*n-total)
		printf("%d,%d\n",min,max);
	else
		if(total-min*n<max*n-total)
		{
			printf("%d\n",max);
		}
		else if(total-min*n>max*n-total)
			printf("%d\n",min);
}
