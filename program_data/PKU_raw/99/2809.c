int main()
{
	int n,a[100],i,m1=0,m2=0,m3=0,m4=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>60) m4++;
		else if(a[i]>35) m3++;
		else if(a[i]>18) m2++;
		else m1++;
	}
	printf("1-18: %.2f%%\n",(double)m1/n*100);
	printf("19-35: %.2f%%\n",(double)m2/n*100);
	printf("36-60: %.2f%%\n",(double)m3/n*100);
	printf("60??: %.2f%%\n",(double)m4/n*100);
	return 0;
}

