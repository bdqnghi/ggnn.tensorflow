int main()
{
	int a,b,c,d,e,f;
	int n;
	int result;
	for(n;n;n++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&d==0){
			break;
		}else{
			d=d+12;
			result=3600*(d-a)+60*(e-b)+(f-c);
			printf("%d\n",result);
		}
	}
	return 0;
}
