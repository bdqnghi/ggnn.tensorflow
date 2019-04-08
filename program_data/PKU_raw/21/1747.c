void main()
{
	int n,i,j=0;
	float a[100],total=0,temp1,temp2,temp,aa[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		total=total+a[i];
	}
	total=total/n;
	if(a[0]>=total)
		temp2=a[0]-total;
	else 
		temp2=total-a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>=total)
			temp1=a[i]-total;
	    else 
		    temp1=total-a[i];
		if(temp1>=temp2)
			temp2=temp1;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=total)
			temp1=a[i]-total;
	    else if(a[i]<total)
		    temp1=total-a[i];
		if(temp1!=temp2)
		{
			a[i]=0;
		}
		else if(temp1==temp2)
		{
			aa[j]=a[i];
			j++;
		}
	}
	n=j-1;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(aa[i]>aa[j])
			{
				temp=aa[j];
				aa[j]=aa[i];
				aa[i]=temp;
			}
	}
	printf("%.0f",aa[0]);
	for(i=1;i<=n;i++)
		printf(",%.0f",aa[i]);
}

				

		
		

