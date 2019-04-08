int main()
{
	int n,x,i=0;
	double s[X],sum1=0,ave,sum2=0,f,*j;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&x);
		for(j=s;j<s+x;j++)
		{
			if(j==s)
				scanf("%lf",&*j);
            else
			    scanf(" %lf",&*j);
			sum1=sum1+(*j);
		}
		ave=sum1/x;
		for(j=s;j<s+x;j++)
		{
			(*j)=((*j)-ave)*((*j)-ave);
			sum2=sum2+(*j);
		}
		f=sqrt(sum2/x);
		printf("%.5f\n",f);
		i++;
		sum1=0;sum2=0;ave=0;
	}
	return 0;
}
