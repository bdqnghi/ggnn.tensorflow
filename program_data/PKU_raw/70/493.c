
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i;
	double a[1000],b[1000];
	double len,dis=0;
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&a[i],&b[i]);
	}
	int x,y;
	for(x=0;x<n-1;x++)
	{
		for(y=x+1;y<n;y++)
		{
			len=sqrt((a[y]-a[x])*(a[y]-a[x])+(b[y]-b[x])*(b[y]-b[x]));
			if(len>dis)
			{
				dis=len;
			}
		}
	}
	printf("%.4lf\n",dis);
	return 0;
}