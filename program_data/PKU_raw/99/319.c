int main()
{
	int n,i,age[100],sum[4]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>age[i];
		if(age[i]>=1&&age[i]<=18) sum[0]++;
		else if(age[i]>=19&&age[i]<=35) sum[1]++;
		else if(age[i]>=36&&age[i]<=60) sum[2]++;
		else if(age[i]>=61) sum[3]++;
	}
	printf("1-18: %.2lf%%\n",(double)sum[0]*100/n);
	printf("19-35: %.2lf%%\n",(double)sum[1]*100/n);
	printf("36-60: %.2lf%%\n",(double)sum[2]*100/n);
	printf("60??: %.2lf%%",(double)sum[3]*100/n);
	return 0;
}