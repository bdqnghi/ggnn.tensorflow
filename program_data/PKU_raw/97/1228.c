int main(){
	int n,a;
	scanf("%d",&n);
	for(a=0;n>=100;a++){
		n-=100;
	}printf("%d\n",a);
	for(a=0;n>=50;a++){
		n-=50;
	}printf("%d\n",a);
	for(a=0;n>=20;a++){
		n-=20;
	}printf("%d\n",a);
	for(a=0;n>=10;a++){
		n-=10;
	}printf("%d\n",a);
	for(a=0;n>=5;a++){
		n-=5;
	}printf("%d\n",a);
	for(a=0;n>=1;a++){
		n-=1;
	}printf("%d\n",a);
	return 0;
}

