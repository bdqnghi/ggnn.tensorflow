int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	double p1[100],p2[100],dism=0,dis;
	for(int k=0;k<n;k++)
	{
		scanf("%lf%lf",&p1[k],&p2[k]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lf%lf",&p1[i],&p2[i]);
		for(int j=i+1;j<n;j++)
		{
			scanf("%lf%lf",&p1[j],&p2[j]);
            dis=sqrt(pow(p1[i]-p1[j],2)+pow(p2[i]-p2[j],2));
			if(dis>dism)
			{
				dism=dis;
			}
		}
	}
	printf("%.4lf",dism);
	return 0;
}
