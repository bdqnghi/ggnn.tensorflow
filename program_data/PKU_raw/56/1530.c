
int main()
{
	int wan,ge,shi,bai,qian;
	long int zheng;
	scanf("%d",&zheng);
	wan=zheng/10000;
	qian=zheng/1000-wan*10;
	bai=zheng/100-wan*100-qian*10;
	shi=zheng/10-wan*1000-qian*100-bai*10;
	ge=zheng-wan*10000-qian*1000-bai*100-shi*10;
	if(wan)
		printf("%d",wan+qian*10+bai*100+shi*1000+ge*10000);
		else
		if(qian)
				printf("%d",qian+bai*10+shi*100+ge*1000);
		else
			if(bai)
				printf("%d",bai+shi*10+ge*100);
			else
				if(shi)
					printf("%d",shi+ge*10);
				else
					printf("%d",ge);


	
}
