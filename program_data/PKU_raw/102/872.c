int main()
{
    int n,i,j=0,k=0,r=0;
	double mh[50],fh[50],zs=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[100];
		scanf("%s",a);
		scanf("%lf",&zs);
				if(a[0]=='m')
		{
			mh[j]=zs;
			j++;
		}
		else if(a[0]=='f')
		{
			fh[k]=zs;
			k++;
		}
	}
    for(i=j-1;i>0;i--)
	{
		for(r=0;r<i;r++)
		{
			if(mh[r]>mh[r+1])
			{
				double tmpm;
				tmpm=mh[r+1];
				mh[r+1]=mh[r];
				mh[r]=tmpm;
			}
		}
	}
	for(i=k-1;i>0;i--)
	{
		for(r=0;r<i;r++)
		{
			if(fh[r]>fh[r+1])
			{
				double tmpf;
				tmpf=fh[r+1];
				fh[r+1]=fh[r];
				fh[r]=tmpf;
			}
		}
	}
	for(i=0;i<j;i++)
	{
	    printf("%.2lf ",mh[i]);
	}
	for(i=k-1;i>=0;i--)
	{
		if(i==k-1)
		    printf("%.2lf",fh[i]);
		else
			printf(" %.2lf",fh[i]);

	}
	return 0;
}