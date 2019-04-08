int main(int argc, char* argv[])
{
	int n,i,p;
	scanf("%d",&n);
	double max,x[100],y[100];
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		for(p=i+1;p<n;p++)
		{   
			if(i==0&&p==1)
				max=sqrt(pow((x[i]-x[p]),2)+pow((y[i]-y[p]),2));
			else if(sqrt(pow((x[i]-x[p]),2)+pow((y[i]-y[p]),2))>max)
				max=sqrt(pow((x[i]-x[p]),2)+pow((y[i]-y[p]),2));
		}
	}
	printf("%.4lf",max);
	return 0;
}

