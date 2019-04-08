int main()
{
	int n,i,a=0;
    scanf("%d",&n);
	if(n>=100){
		printf("%d\n",(n/100));
	}
	else{
		printf("0\n");
	}

	a=n%100;
	if(a>=50){
		printf("%d\n",a/50);
		a=a%50;
	}
	else{
		printf("0\n");
	}
    if(a>=20){
		printf("%d\n",a/20);
		a=a%20;
	}
	else{
		printf("0\n");
	}
	if(a>=10){
		printf("%d\n",a/10);
		a=a%10;
	}
	else{
		printf("0\n");
	}
	if(a>=5){
		printf("%d\n",a/5);
		a=a%5;
	}
	else{
		printf("0\n");
	}
	if(a<=4){
		printf("%d\n",a);
		
	}
	else{
		printf("0");
	}

    
		


	return 0; 
}