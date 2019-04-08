
int main(int argc, char* argv[])
{
	int n,i;
	int a[100];
	double b[4];
	int c=0,d=0,e=0,f=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
		if (a[i]<=18){c=c+1;}
        if (a[i]>=19&&a[i]<=35){d=d+1;}
        if (a[i]>=36&&a[i]<=60){e=e+1;}
        if (a[i]>=61){f=f+1;}
	}
	b[0]=((double)c/n)*100;
    b[1]=((double)d/n)*100;
    b[2]=((double)e/n)*100;
    b[3]=((double)f/n)*100;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",b[0],b[1],b[2],b[3]);
	
	return 0;
}