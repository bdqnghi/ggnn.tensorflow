int main()
{
	int i,n,a[100];
	int count1=0,count2=0,count3=0,count4=0,sum;
	double rate1,rate2,rate3,rate4;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{ 
		if(a[i]<=18)
		{
			count1++;
		}
		
    	if(a[i]>18&&a[i]<=35)
		{
			count2++;
		}
		if(a[i]>35&&a[i]<=60)
		{
			count3++;	}  
		if(a[i]>60)
		{
			count4++;
	
		}
      
	
	}
 sum=count1+count2+count3+count4;
    rate1=(double)count1/sum*100;
	rate2=(double)count2/sum*100;
    rate3=(double)count3/sum*100;
    rate4=(double)count4/sum*100;
	printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",rate1,rate2,rate3,rate4);
	return 0;

}	

