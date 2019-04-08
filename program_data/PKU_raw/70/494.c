double a[100],t[100];
int main()
{
	int i,k,s,u=0;
	scanf("%d",&s);
	double l,p=0;
	for(i=0;i<s;i++)
	{
		scanf("%lf%lf",&a[i],&t[i]);
	}
		while(u<s)
		{
			for(k=u+1;k<s;k++)
			{
				l=sqrt((a[k]-a[u])*(a[k]-a[u])+(t[k]-t[u])*(t[k]-t[u]));
				if(l>=p)p=l;
				
			}u++;
		}
	printf("%.4lf",p);
return 0;
}