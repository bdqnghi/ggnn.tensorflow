int f(int m,int n){
	int i;
	int k=0;
	for(i=2;i<=n;i++)
		k=((m%i)+k)%i;
	return k;
}

int main(void){
	int a,b,i,re;
	for(i=0;;i++){
		scanf("%d%d",&b,&a);
		if(a==0)
			break;
		re=f(a,b)+1;
		printf("%d\n",re);
	}
	return 0;

}