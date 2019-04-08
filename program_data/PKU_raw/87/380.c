int main()
{
	int i=1;
	for(i=1;i<=100;i++){
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a!=0){
	int result;
	result=(59-b)*60+60-c+(11-a+d)*3600+e*60+f;
	printf("%d\n",result);
		}
	}
	return 0;
}