
int main(){
	int x;
	scanf("%d",&x);
	if((x%3==0)&&(x%5==0)&&(x%7==0))
		printf("3 5 7");
	else if((x%3==0)&&(x%5==0)&&(x%7!=0))
		printf("3 5");
	else if((x%5==0)&&(x%7==0)&&(x%3!=0))
		printf("5 7");
	else if((x%3==0)&&(x%7==0)&&(x%5!=0))
		printf("3 7");
	else if((x%3==0)&&(x%5!=0)&&(x%7!=0))
		printf("3");
	else if((x%3!=0)&&(x%5==0)&&(x%7!=0))
		printf("5");
	else if((x%3!=0)&&(x%5!=0)&&(x%7==0))
		printf("7");
	else
		printf("n");
	return 0;
}