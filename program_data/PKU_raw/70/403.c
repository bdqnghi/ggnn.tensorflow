struct dis{
	double x,y;
}s[1000];
int main(int argc, char* argv[])
{
	int n,i,j,k=0;
	double l[10000],m;
	scanf ("%d",&n);
    for (i=0;i<n;i++)
	{
		scanf ("%lf%lf",&s[i].x,&s[i].y);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=n-1;j>i;j--)
		{
			k++;
			l[k]=sqrt((s[i].x-s[j].x)*(s[i].x-s[j].x)+(s[i].y-s[j].y)*(s[i].y-s[j].y));
		}
	}
	//for (i=1;i<k+1;i++)
//	{
		for (j=k;j>1;j--)
		{
			if (l[j]>l[j-1])
			{	m=l[j-1];
			    l[j-1]=l[j];
				l[j]=m;
			}

		}

//	}
	printf ("%.4lf\n",l[1]);

	return 0;
}