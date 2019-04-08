int main()
{
	int n,i, k,j=0,p;
	float average,a[100],sum=0,c[100],d[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(k=0;k<n-i-1;k++)
		{
			if(a[i]>a[i+1])
			{
				float t=0;
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	average=sum/n;
	for(i=0;i<n;i++)
	{
		c[i]=average-a[i];
		if(c[i]<0)
		{
			c[i]=a[i]-average;
		}
	}
	float max=0;
	for(i=0;i<n;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==max)
		{
		      d[j]=a[i];
                         j++;
		}
		
	}
         if(j==1)
         {
              printf("%.0f", d[j-1]);
           }
          else if(j>1)
          {
                 for(p=0;p<j-1;p++)
                 {
                   printf("%.0f,", d[p]);
                 }                  
                 printf("%.0f",d[j-1]);
            }
	return 0;


		
}
