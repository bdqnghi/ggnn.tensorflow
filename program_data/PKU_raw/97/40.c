void main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",n/100);
	n-=100*(n/100);
	printf("%d\n",n/50);
	n-=50*(n/50);
    printf("%d\n",n/20);
	n-=20*(n/20);
    printf("%d\n",n/10);
	n-=10*(n/10);
    printf("%d\n",n/5);
	n-=5*(n/5);
    printf("%d\n",n);
}