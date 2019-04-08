int main(){
	int n,s1,s2,s3,s4,s5,s6;
	scanf("%d",&n);
	s1=n/100;
	s2=(n%100)/50;
	s3=(n%50)/20;
	s4=((n%50)%20)/10;
	s5=(n%10)/5;
	s6=n%5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",s1,s2,s3,s4,s5,s6);
	return 0;
}