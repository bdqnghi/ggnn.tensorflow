int main()
{
	int n,i,age[100],count1=0,count2=0,count3=0,count4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
        if(age[i]>=1&&age[i]<=18)
			count1++;
		else if(age[i]>=19&&age[i]<=35)
			count2++;
		else if(age[i]>=36&&age[i]<=60)
			count3++;
		else count4++;
	}
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",
		(((double)count1)/n)*100,(((double)count2)/n)*100,
		(((double)count3)/n)*100,(((double)count4)/n)*100);
	return 0;
}