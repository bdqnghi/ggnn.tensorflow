int main()
{
	int a,b,c,d,e,f,i;
	int miaoshu1,miaoshu2,jieguo;
	for(i=1;i<=10086;i++){
		scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
		if(a<1||d>11||b<0||f>59){
			break;
		}else{
			miaoshu1=a*3600+b*60+c;
			miaoshu2=(d+12)*3600+e*60+f;
			jieguo=miaoshu2-miaoshu1;
			printf("%d\n",jieguo);
		}
	}
	scanf("0 0 0 0 0 0");
	return 0;
}

