int main()
{
	int a, b, c, d, e, f,g=1,m,n;
	while(g==1){
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		g=0;
break;
	}else{
		g=1;
	}	
	m=a*3600+b*60+c;
	n=(d+12)*3600+e*60+f;
	printf("%d\n",n-m);
	}

	return 0;
}
