void arrange(float *arrangearry,int nt,int kd_order)
{
	int flagi,flagj;
	float temporary;
	if(kd_order==1)
	{
		for(flagi=nt-1;flagi>0;flagi--)
		{
			for(flagj=0;flagj<flagi;flagj++)
			{
				if(arrangearry[flagj]<arrangearry[flagj+1])
				{
					temporary=arrangearry[flagj];
					arrangearry[flagj]=arrangearry[flagj+1];
					arrangearry[flagj+1]=temporary;
				}
			}
		}
	}
	else
	{
		for(flagi=nt-1;flagi>0;flagi--)
		{
			for(flagj=0;flagj<flagi;flagj++)
			{
				if(arrangearry[flagj]>arrangearry[flagj+1])
				{
					temporary=arrangearry[flagj];
					arrangearry[flagj]=arrangearry[flagj+1];
					arrangearry[flagj+1]=temporary;
				}
			}
		}
	}
}
int main()
{
	int i,n,len,male=0,female=0;
	float a[40],b[40],height;
	char sex[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%s%f",sex,&height);
		len=strlen(sex);
		if(len==4)
		{
			a[male]=height;
			male++;
		}
		if(len==6)
		{
			b[female]=height;
			female++;
		}
	}
	arrange(a,male,0);
	arrange(b,female,1);
	printf("%.2f",a[0]);
	for(i=1;i<male;i++)
		printf(" %.2f",a[i]);
	for(i=0;i<female;i++)
		printf(" %.2f",b[i]);
	return 0;
}