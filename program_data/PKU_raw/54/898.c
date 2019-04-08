int main()
{
	int monkey(int,int);
	long int m,n,c;
	scanf("%d %d",&m,&n);
	c=monkey(m,n);
	printf("%ld",c);
	return 0;
}
int monkey(int t,int k)
{
	long int i,j;
	long double g[10000];
	g[0]=1.5;
    for(j=1;;j++){
	g[t]=j;	
	for(i=t;i>=0;i--){
	g[i-1]=t*g[i]/(t-1)+k;
	if(g[i-1]!=(int)g[i-1])
		break;
	if(g[0]==(int)g[0])
		goto sky;
	}
	}
sky:
    return ((int)g[0]);
}