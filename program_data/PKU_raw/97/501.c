int main(){
	int n,m;
	scanf("%d",&n);
	m=n/100;
	printf("%d\n",m);
	m=(n%100)/50;
	printf("%d\n",m);
	m=((n%100)%50)/20;
	printf("%d\n",m);
	m=(((n%100)%50)%20)/10;
	printf("%d\n",m);
	m=((((n%100)%50)%20)%10)/5;
	printf("%d\n",m);
	m=(((((n%100)%50)%20)%10)%5)/1;
	printf("%d\n",m);
	return 0;
}

