int main()
{
	float h,e,mh[40],fh[40];
	int n,i,j,am,af;
	char xb[7];
	am=0;
	af=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %f",xb,&h);
		if(xb[0]=='m')
		{
			mh[am]=h;
			am=am+1;
		}
		if(xb[0]=='f')
		{
			fh[af]=h;
			af=af+1;
		}
	}
	for(i=1;i<=am;i++)
	{
		for(j=0;j<am-i;j++)
		{
			if(mh[j]>mh[j+1])
			{
				e=mh[j];
				mh[j]=mh[j+1];
				mh[j+1]=e;
			}
		}
	}
	for(i=1;i<=af;i++)
	{
		for(j=af-1;j>0;j--)
		{
			if(fh[j]>fh[j-1])
			{
				e=fh[j];
				fh[j]=fh[j-1];
				fh[j-1]=e;
			}
		}
	}
	for(i=0;i<am;i++)
	{
		if(i==0)
		{
			printf("%.2f",mh[i]);
		}else{
			printf(" %.2f",mh[i]);
		}
	}
	for(i=0;i<af;i++)
	{
		printf(" %.2f",fh[i]);
	}
	return 0;
}