int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",n/100,(n%100)/50,(n%50)/20,(n%50-((n%50)/20)*20)/10,(n%10)/5,n%5);
	return 0;
}