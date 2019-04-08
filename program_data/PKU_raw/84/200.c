int main()
{
    int n,a[100],i=0,max=0,max2=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		if(a[i]>max&&a[i]>max2)
		{
			max2=max;
			max=a[i];
        }    
		else if(a[i]<max&&a[i]>max2)
			max2=a[i];
		i++;
	}
    printf("%d\n%d\n",max,max2);
	return 0;
}


