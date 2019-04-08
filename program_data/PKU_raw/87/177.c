int main()
{
	int a,b,c,d,e,f,s,m,n,v,i;
	for(i=0;i<100;i++){
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0){break;}
	d=d+12;
	if(c<=f){v=f-c;}
	if(c>f){v=f+60-c;e=e-1;}
	if(b<=e){n=e-b;}
	if(b>e){n=e+60-b;d=d-1;}
	m=d-a;
	s=3600*m+60*n+v;
	printf("%d\n",s);}
	return 0;
}
	

