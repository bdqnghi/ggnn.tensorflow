int main()
{
	
	int i,j,e,f,d,h;
    int k,m,n;
	float x[1000],y[1000],a,b,c;
	char z[1000];
	d=0;
	a=0;
	b=0;
	e=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	scanf("%f",&x[i]);
	a+=x[i];
	}
	i=0;
	for(i=1;i<=n;i++){
		scanf("%f",&y[i]);
	if(y[i]<=59)y[i]=0;
	if(y[i]>=90)y[i]=4.0;
	if(y[i]<=89&&y[i]>=85)y[i]=3.7;
	if(y[i]<=84&&y[i]>=82)y[i]=3.3;
	if(y[i]<=81&&y[i]>=78)y[i]=3.0;
	if(y[i]<=77&&y[i]>=75)y[i]=2.7;
	if(y[i]<=74&&y[i]>=72)y[i]=2.3;
	if(y[i]<=71&&y[i]>=68)y[i]=2.0;
	if(y[i]<=67&&y[i]>=64)y[i]=1.5;
	if(y[i]<=63&&y[i]>=60)y[i]=1.0;
	b+=x[i]*y[i];
	}
	c=b/a;
	printf("%.2f",c);
	return 0;
}
