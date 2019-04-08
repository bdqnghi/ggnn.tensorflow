int bubble_sort(float a[300][2], float b[300][2], int n)
{
	int i, j=0, count;
	float  temp1, temp2;
	for (j=1; j<n; j++)	
	{
		for(i=0; i<n-j; i++)
		{		
			if (a[i][1]<a[i+1][1])		
			{			
				temp1=a[i][0];
				temp2=a[i][1];
				a[i][0]=a[i+1][0];
				a[i][1]=a[i+1][1];
				a[i+1][0]=temp1;
				a[i+1][1]=temp2;
			}	
		}
	}
	j=0;
	for(i=0; i<n; i++)
	{
		if(a[0][1] == a[i][1])
		{
			b[j][0]=a[i][0];
			b[j][1]=a[i][1];
		    j++;
		}
		if(a[0][1] != a[i][1])
			break;
		}
	count=i;
	for(j=1; j<count; j++)
		if(b[0][1]==0)
			break;
		else
		{
		for(i=0; i<count-j; i++)
			if(b[i][0]>b[i+1][0] && b[i+1][0]!=0)
			{
				temp1=b[i][0];
				temp2=b[i][1];
				b[i][0]=b[i+1][0];
				b[i][1]=b[i+1][1];
				b[i+1][0]=temp1;
				b[i+1][1]=temp2;
			}
		}
	return(count);
}


int main()
{
	float a[300][2], sum=0;
	float b[300][2]={0};
	int n, i, count;
	float average;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%f", &a[i][0]);
		sum=sum+a[i][0];
	}
	average=(float)sum/n;
	for(i=0; i<n; i++)
	{
		if(a[i][0]-average>0)
			a[i][1]=a[i][0]-average;
		else
			a[i][1]=average-a[i][0];
	}
	count = bubble_sort(a, b, n);
	for(i=0; i<count; i++)
	{
		if(i==0)
			printf("%.0f", b[i][0]);
		else
			printf(",%.0f", b[i][0]);
	}
	printf("\n");
	return 0;
}
