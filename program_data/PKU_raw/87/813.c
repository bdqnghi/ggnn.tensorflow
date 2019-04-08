int main()
{
	int a,b,c,d,e,f,g[1000],i,j;
	for(i=1;i<=1000;i++){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
			break;
		g[i]=f-c+60*(e-b)+3600*(12+d-a);
	}
	for(j=1;j<i;j++){
		printf("%d\n",g[j]);
	}
				return 0;
}