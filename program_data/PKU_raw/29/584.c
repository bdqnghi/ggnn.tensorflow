int main()
{
    int m,i,j,s[100];
	scanf("%d",&m);
		for(j=1;j<=m;j++){
           scanf("%d",&s[j]);
		}
	for(j=1;j<=m;j++){
		int a=2,b=1;
	    double sum=(double)a/b;
	    for(i=1;i<s[j];i++)
	{
		int c=a+b;
		b=a;
		a=c;
		double x=(double)a/b;
		sum=sum+x;
	}
	printf("%.3lf\n",sum);
	}
return 0;
}