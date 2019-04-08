void main()
{
	int a[N],i,n;
	double s1,s2,s3,s4;
	s1=s2=s3=s4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>=1 && a[i]<=18)
			s1++;
		else if(a[i]>=19 && a[i]<=35)
			s2++;
		else if(a[i]>=36 && a[i]<=60)
			s3++;
		else if(a[i]>60)
			s4++;
	}
	s1=s1/n*100;s2=s2/n*100;s3=s3/n*100;s4=s4/n*100;
	printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%\n",s1,s2,s3,s4);
}