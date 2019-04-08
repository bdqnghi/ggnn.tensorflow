int main()
{
	int i,n,l1,l2,j;
	double tall[42],t1[42],t2[42],tt;
	char s[10];
	scanf("%d",&n);
	l1=0;
	l2=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		scanf("%lf",&tall[i]);
		if(s[0]=='m')
		{
			t1[l1]=tall[i];
			l1++;
		}
		else
		{
			t2[l2]=tall[i];
			l2++;
		}
			
	}
	for(i=0;i<l1-1;i++)
	{
		for(j=0;j<l1-i-1;j++)
		{
			if(t1[j]>t1[j+1])
			{
				tt=t1[j];
				t1[j]=t1[j+1];
				t1[j+1]=tt;
			}
		}
	}
	for(i=0;i<l1;i++)
	{
		printf("%.2lf ",t1[i]);
	}
	for(i=0;i<l2-1;i++)
	{
		for(j=0;j<l2-i-1;j++)
		{
			if(t2[j]<t2[j+1])
			{
				tt=t2[j];
				t2[j]=t2[j+1];
				t2[j+1]=tt;
			}
		}
	}
	for(i=0;i<l2-1;i++)
		printf("%.2lf ",t2[i]);
	printf("%.2lf",t2[i]);
	return 0;
}