void main()
{
	float a[40],s1[40],s2[40],temp;
	int n,i1=0,i2=0,i,j,temp1=0,m;
	char b[7];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",b);
		scanf("%f",&a[i]);
		if(b[0]=='m')
		{
			s1[i1]=a[i];
			i1++;
		}
		if(b[0]=='f')
		{
			s2[i2]=a[i];
			i2++;
		}
	}
	
	for(i=0;i<i1-1;i++)
	{
		temp1=i;
		temp=s1[i];
		for(j=i+1;j<i1;j++)
		{
			if(temp>s1[j])
			{
				temp=s1[j];
				temp1=j;
			}
		}
		s1[temp1]=s1[i];
		s1[i]=temp;
	}
	temp1=0;
	for(i=0;i<i2-1;i++)
	{
		temp1=i;
		temp=s2[i];
		for(j=i+1;j<i2;j++)
		{
			if(temp>s2[j])
			{
				temp=s2[j];
				temp1=j;
			}
		}
		s2[temp1]=s2[i];
		s2[i]=temp;
	}
	for(i=0;i<i1;i++)
	{
		printf("%1.2f ",s1[i]);
	}
	for(i=i2-1;i>0;i--)
	{
		printf("%1.2f ",s2[i]);
	}
	printf("%1.2f",s2[0]);
}