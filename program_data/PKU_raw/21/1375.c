
int main(int argc, char* argv[])
{
	int n,i,sum=0;
	scanf("%d",&n);
	float average;
	int b[300];
	int *a;
    a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
        sum+=a[i];
	}
	average=(float)sum/n;

	int max=a[0];
	for(int j=0;j<n;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
	}

	int min=a[0];
	for(int k=0;k<n;k++)
	{
		if(a[k]<min)
		{
			min=a[k];
		}
	}

    if((max-average)>(average-min))
	{
		printf("%d",max);
	}
	else if((max-average)<(average-min))
	{
		printf("%d",min);
	}
	else
	{
		printf("%d,%d",min,max);
	}
	return 0;
}
