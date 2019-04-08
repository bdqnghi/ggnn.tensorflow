void main()
{
	int n,i,max,min,p;
	float av,sum=0,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	for(i=0;i<n;i++)
		sum=sum+a[i];
	av=sum/n;
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		max=a[i]>max?a[i]:max;
		min=a[i]>min?min:a[i];
	}
	p=max+min;
	if(2*av==p)
		printf("%d,%d\n",min,max);
	else if(2*av>p)
		printf("%d\n",min);
	else if(2*av<p)
		printf("%d\n",max);
}