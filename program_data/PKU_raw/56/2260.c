int main()
{
	int a[6];
	int i;
	scanf("%d",&i);
	a[5]=i/10000;
	a[4]=(i-a[5]*10000)/1000;
	a[3]=(i-a[5]*10000-a[4]*1000)/100;
	a[2]=(i-a[5]*10000-a[4]*1000-a[3]*100)/10;
	a[1]=(i-a[5]*10000-a[4]*1000-a[3]*100-a[2]*10)/1;
	int j;
	int n=0;
	int t;
	int k;
	for(j=1;j<=5;j++)
	{
		if(a[j]!=0)
		{
			n++;
		}
	}
	for(j=1;j<=(n+1)/2;j++)
	{
		t=a[j];
		a[j]=a[n-j+1];
		a[n-j+1]=t;
	}
	for(k=n;k>=1;k--)
	{
		printf("%d",a[k]);
	}
	return 0;
}
