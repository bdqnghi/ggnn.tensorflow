int main(){
	int n;
	scanf("%d",&n);
	int i,l,h,m=n;
	for(i=0;l!=0;i++){
		l=m/10;
		m=l;
	}
	int g;
	for(g=0;g<i;g++){
		h=n%10;
		printf("%d",h);
		n=n/10;
	}
	return 0;
}