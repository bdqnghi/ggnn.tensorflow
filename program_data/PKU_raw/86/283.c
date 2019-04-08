int main()
{
	int n,cishu,i,j,k,time1,time2;
	int sum=0;
	int a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&cishu);
		if(cishu==0)
			sum=60;
		if(cishu!=0)
        {
           for(j=0;j<cishu;j++)
			   scanf("%d",&a[j]);
           for(k=1;k<=cishu;k++)
		   {
              time1=a[k-1]+3*(k-1);
		      time2=a[k-1]+3*k;
		      if(time1>=60)
			      sum=60-3*(k-1);
		      if(time1<60&&time2>=60)
			      sum=a[k-1];
			  if(sum!=0)
				  break;
		   }
	        	if(sum==0)
			   sum=60-3*cishu;
		}
		printf("%d\n",sum);
    }
	return 0;
}
