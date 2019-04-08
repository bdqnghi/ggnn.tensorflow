int main()
{
	int a;
	char b;
	b='n';
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0){
		printf("3 5 7");}
	else if(a%3==0&&a%5==0&&a%7!=0){
		printf("3 5\n");}
	else if(a%3==0&&a%5!=0&&a%7==0){
		printf("3 7\n");}
	else if(a%3!=0&&a%5==0&&a%7==0){
		printf("5 7\n");}
	else if(a%3==0&&a%5!=0&&a%7!=0){
		printf("3\n");}	
	else if(a%3!=0&&a%5!=0&&a%7==0){
		printf("7\n");}
	else if(a%3!=0&&a%5==0&&a%7!=0){
		printf("5\n");}
	else{
		printf("%c",b);}
	return 0;
}