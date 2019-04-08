
void main()
{
	int n;
	int m[300];
	int i,j;
	int b;
	int sum=0,temp;
	float ave;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&m[i]);
	for(i=0;i<n;i++)
		sum=sum+m[i];
	ave=(float)sum/(float)n;
	for (i=1;i<n-1;i++)
	{
		for (j=0;j<n-i;j++)
		{
			if (m[j]>m[j+1])
			{
				temp=m[j];
				m[j]=m[j+1];
				m[j+1]=temp;
			}
		}
	}
	if ((ave-(float)m[0])>((float)m[n-1]-ave))
		printf("%d",m[0]);
	else if ((ave-(float)m[0])<((float)m[n-1]-ave))
		printf("%d",m[n-1]);
	else
		printf("%d,%d",m[0],m[n-1]);
}
