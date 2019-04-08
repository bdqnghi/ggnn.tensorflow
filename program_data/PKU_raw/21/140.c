void main()
{
	int n,i,j,k=0,t;
	int c[300];
	float a[300],b[300],aver,max,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	for(i=0;i<n;i++)
		total=total+a[i];
	aver=total/n;
	for(i=0;i<n;i++)
	{
		if((a[i]-aver)>=0)
			b[i]=a[i]-aver;
		else
			b[i]=aver-a[i];
	}
	max=b[0];
	for(i=1;i<n;i++)
		if(b[i]>max)
			max=b[i];
    for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
		   c[k]=(int)a[i];
		   k++;
		}
	}
    if(k==2)
	{
		if(c[0]>c[1])
		{
			t=c[0];
			c[0]=c[1];
			c[1]=t;
		}
	}        
	if(k>=3)
	{
		for(i=0;i<k-1;k++)
		{
		    for(j=0;j<k-1-i;j++)
			{
			    if(c[j]>c[j+1])
				{
				    t=c[j];
				    c[j]=c[j+1];
				    c[j+1]=t;
				}
			}
		}
	}  
	for(i=0;i<k;i++)
	{
		if(i!=(k-1))
			printf("%d,",c[i]);
		else
			printf("%d",c[i]);
	}
	printf("\n");
}
	
	