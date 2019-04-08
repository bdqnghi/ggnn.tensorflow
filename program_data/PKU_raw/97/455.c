
int main()
{
	int n;
	scanf("%d",&n);
	
	int bai;
	bai=n/100;
	if(bai>0){
		printf("%d\n",bai);
		n=n-bai*100;
	}
	else printf("0\n");
	
	int wushi;
	wushi=n/50;
	if(wushi>0){
		printf("%d\n",wushi);
		n=n-wushi*50;
	}
	else printf("0\n");
	
	int ershi;
    ershi=n/20;
	if(ershi>0){
		printf("%d\n",ershi);
		n=n-ershi*20;
	}
	else printf("0\n");
	
	int shi;
	shi=n/10;
    if(shi>0){
		printf("%d\n",shi);
		n=n-shi*10;
	}
	else printf("0\n");
    
	int wu;
	wu=n/5;
    if(wu>0){
		printf("%d\n",wu);
		n=n-wu*5;
	}
	else printf("0\n");

	int yi;
	yi=n;
    if(yi>0){
		printf("%d\n",yi);
	}
	else printf("0\n");


	return 0;
}
