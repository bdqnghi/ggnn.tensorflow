int main()
{
	int a;
	scanf("%d",&a);
	if(a<10)
		printf("%d",a);
	if((a>10)&&(a<100)){
		int shiwei=0;
		shiwei=a/10;
		int gewei=0;
		gewei=a-10*shiwei;
		printf("%d%d",gewei,shiwei);
	}
	if((a>100)&&(a<1000)){
		int ge=0,shi=0,bai=0;
		bai=a/100;
		shi=(a-bai*100)/10;
		ge=a-bai*100-shi*10;
		printf("%d%d%d",ge,shi,bai);
	}
	if((a>1000)&&(a<10000)){
		int ge=0,shi=0,bai=0,qian=0;
		qian=a/1000;
		bai=(a-qian*1000)/100;
		shi=(a-qian*1000-bai*100)/10;
		ge=a-qian*1000-bai*100-shi*10;
		printf("%d%d%d%d",ge,shi,bai,qian);
	}
	if((a>10000)&&(a<100000)){
		int ge=0,shi=0,bai=0,qian=0,wan=0;
        wan=a/10000;
		qian=(a-wan*10000)/1000;
        bai=(a-wan*10000-qian*1000)/100;
		shi=(a-wan*10000-qian*1000-bai*100)/10;
		ge=a-wan*10000-qian*1000-bai*100-shi*10;
		printf("%d%d%d%d%d",ge,shi,bai,qian,wan);
	}

    return 0;
}