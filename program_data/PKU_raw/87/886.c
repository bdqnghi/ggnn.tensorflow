int main(int argc, char* argv[])
{
    int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
		printf("%d\n",(d+12-a)*3600+(e-b)*60+f-c);
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		
	}
	return 0;
}