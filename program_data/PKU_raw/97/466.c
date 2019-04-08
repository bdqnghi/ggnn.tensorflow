int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	printf("%d\n",(n-n%100)/100);
	printf("%d\n",(n%100-n%50)/50);
	if(n%100-n%10>=50){
	  printf("%d\n",(n%100-50)/20);
	  printf("%d\n",(n%100-50-((n%100-50)/20)*20)/10);
	}
	  else if(n%100-n%10<50){
		printf("%d\n",(n%50-n%20)/20);
	    printf("%d\n",(n%20-n%10)/10);
	  }
	printf("%d\n",(n%10-n%5)/5);
	printf("%d\n",n%5);
	return 0;
}