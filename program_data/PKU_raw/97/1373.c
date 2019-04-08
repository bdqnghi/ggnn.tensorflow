int main(){
	int n;
	scanf("%d",&n);
	int s1=n/100;
	n=n%100;
	int	s2=n/50;
	n=n%50;
	int	s3=n/20;
	n=n%20;
	int	s4=n/10;
	n=n%10;
	int	s5=n/5;
	n=n%5;
	int	s6=n;
	printf("%d\n",s1);
	printf("%d\n",s2);
	printf("%d\n",s3);
	printf("%d\n",s4);
	printf("%d\n",s5);
	printf("%d",s6);

	return 0;
}