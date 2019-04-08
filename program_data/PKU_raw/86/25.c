int main ()
{
	struct point 
	{
		int m;
		int a[20];
	}p[80];
	int x[80];
	int n;
	scanf ("%d",&n);
	int i,j;
	for (i=0;i<n;i++)
	{
		scanf ("%d",&p[i].m);
		if (p[i].m==0){x[i]=60;}
		if (p[i].m!=0)
		{
			for (j=0;j<p[i].m;j++)
			{
				scanf ("%d",&p[i].a[j]);
				if ((j==p[i].m-1)&&((p[i].a[j]+j*3)<60))
				{
					if ((p[i].a[j]+j*3+3)<=60)
					{
						x[i]=60-3*p[i].m;
					}
					if ((p[i].a[j]+j*3+3)>60)
					{
						x[i]=p[i].a[j];
					}
				}
				if (((p[i].a[j]+j*3)>=60)&&((p[i].a[j-1]+j*3-3)<60))
				{
					if ((p[i].a[j]+j*3)==60){x[i]=p[i].a[j];}
					if ((p[i].a[j]+j*3)>60)
					{
						if ((p[i].a[j-1]+j*3)<60){x[i]=60-(p[i].a[j-1]+j*3)+p[i].a[j-1];}
						if ((p[i].a[j-1]+j*3)>=60){x[i]=p[i].a[j-1];}
					}
				}
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf ("%d\n",x[i]);
	}
	return 0;
}
