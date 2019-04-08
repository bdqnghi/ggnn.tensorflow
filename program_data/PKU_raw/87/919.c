int main(){
	int a, b, c, d, e, f;
	for(int g=0; g<100; g++){
                scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
		if(a==0){break;}
		else{
			
			int h=60*b+c;
			int i=60*e+f;
			int j=(12+d-a)*3600;
			int k=j+i-h;
			printf("%d\n", k);
		}
	}
	return 0;
}