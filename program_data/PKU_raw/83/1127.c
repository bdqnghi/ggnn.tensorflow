int main()
{
	int i,n,xf[10],df[10],zxf=0;
	float xfjd[10],zxfjd=0,gpa;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&xf[i]);
		zxf=zxf+xf[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&df[i]);
		if(df[i]<=100&&df[i]>89) xfjd[i]=4.0;
		if(df[i]<=89&&df[i]>84) xfjd[i]=3.7;
		if(df[i]<=84&&df[i]>81) xfjd[i]=3.3;
		if(df[i]<=81&&df[i]>77) xfjd[i]=3.0;
		if(df[i]<=77&&df[i]>74) xfjd[i]=2.7;
		if(df[i]<=74&&df[i]>71) xfjd[i]=2.3;
		if(df[i]<=71&&df[i]>67) xfjd[i]=2.0;
		if(df[i]<=67&&df[i]>63) xfjd[i]=1.5;
		if(df[i]<=63&&df[i]>59) xfjd[i]=1.0;
		if(df[i]<=59) xfjd[i]=0;
		zxfjd=zxfjd+xfjd[i]*xf[i];
	}
	gpa=zxfjd/zxf;
	printf("%.2f\n",gpa);
}