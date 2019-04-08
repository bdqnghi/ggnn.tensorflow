int main(int argc, char* argv[])
{
	

int i,k;int n,j;double x,sumx=0,a,sum=0,b,d,g[100];
scanf("%d",&k);
for (i=0;i<k;i++)
{

	scanf("%d",&n);
	for (j=0;j<n;j++)
	{
		scanf("%lf",&x);g[j]=x;
		sumx+=x;
		a=sumx/n;}for(j=0;j<n;j++){sum+=(g[j]-a)*(g[j]-a);}
	b=sum/n;
	d=sqrt(b);
	printf("%.5lf\n",d);sumx=0;sum=0;b=0;d=0;
}
return 0;
}