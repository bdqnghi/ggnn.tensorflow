int main(){
	int a,b,c,d,e,m,g;
	
	scanf("%d",&m);
	a=m/100;

	b=m/10;
	c=b-10*a;

	printf("%d\n",a);
	if(c>=5){
		printf("1\n");
		d=(c-5)/2;
		printf("%d\n",d);
		
		if((c-5)%2==0){
			printf("0\n");
		}
		else{
			printf("1\n");
		}
	}
	else{
		printf("0\n");
		printf("%d\n",d=c/2);

		if(c%2==0){
			printf("0\n");
		}
		else{
			printf("1\n");
		}
	}
	e=m-10*b;
	if(e>=5){
		printf("1\n");
		printf("%d\n",g=e-5);
	}
	else{
		printf("0\n");
		printf("%d\n",e);
	}return 0;
 }
