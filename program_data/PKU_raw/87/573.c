int main()
{
	int a,b,c,d,e,f,s,i;
	for(i=0;1;i++){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0)
			break;
		if(a!=0){
		s=3600*(d+12-a)+60*(e-b)+f-c;
		printf("%d\n",s);
		}
	}
	return 0;
}