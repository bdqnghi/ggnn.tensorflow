int main()
{
	int i;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	int n=0;
	for(i=0;i<100;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&f==0&&e==0)
			break;
		n=3600-c-60*b+(12-a)*3600+(d-1)*3600+e*60+f;
		printf("%d\n",n);
	}
	return 0;
}