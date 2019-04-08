int main()
{
	int a,b,c,d,e,f,i=0,time1=0,time2=0,sj=0;
	for(i=0;i<100;i++){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			i=100;
		}
		else{
			time1=a*3600+b*60+c;
			time2=(d+12)*3600+e*60+f;
			sj=time2-time1;
			printf("%d\n",sj);
		}
	}
	return 0;
}