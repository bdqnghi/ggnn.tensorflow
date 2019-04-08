int main()
{
	int n,i,a[1000],b1=0,b2=0,b3=0,b4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18)
		{
			b1+=1;
		}
		else if((a[i]>=19)&&(a[i]<=35))
		{
			b2+=1;
		}
		else if((a[i]>=36)&&(a[i]<=60))
		{
			b3+=1;
		}
		else if(a[i]>60)
		{
			b4+=1;
		}
	}
	int sum=0;
	double c1,c2,c3,c4;
	sum=b1+b2+b3+b4;
	c1=(double)b1/sum*100;
	c2=(double)b2/sum*100;
	c3=(double)b3/sum*100;
	c4=(double)b4/sum*100;
	printf("1-18: %.2lf%%\n",c1);
	printf("19-35: %.2lf%%\n",c2);
	printf("36-60: %.2lf%%\n",c3);
	printf("60??: %.2lf%%\n",c4);
	return 0;
}

