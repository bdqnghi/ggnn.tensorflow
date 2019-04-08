int main()
{
	int n;
	cin>>n;
double a[1000],b[1000],c[100000];
for(int i=0;i<=n-1;i++)
{
	cin>>a[i]>>b[i];
}
int j=0;
for(int s=0;s<=n-2;s++)
{
	for(int t=s+1;t<=n-1;t++)
	{
		c[j]=sqrt((a[s]-a[t])*(a[s]-a[t]) + (b[s]-b[t]) * (b[s]-b[t]));
	    j++;
	}
}

double h;
for(int d=0;d<n*(n-1)/2-1;d++)
for(int f=0;f<n*(n-1)/2-1-d;f++)
{
	if(c[f]>c[f+1])
	{
		h=c[f];
		c[f]=c[f+1];
		c[f+1]=h;
	}
}
cout<<c[n*(n-1)/2-1];
return 0;
}
