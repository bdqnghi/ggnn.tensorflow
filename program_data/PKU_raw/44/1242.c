int reverse(int num);
int main()
{
	int a[6],i,z;
	for(i=0;i<6;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
	z=reverse(a[i]);
	if(i==0){
	printf("%d",z);
	}else{
	printf("\n%d",z);
	}
	}
	return 0;
}
int reverse(int num){
	int a=0,Num,n,m;
		Num=num;
		if(Num/10==0){
		n=0;
		}else{
		n=0;
		while(n>=0){
		Num=Num/10;
		if(Num==0){
		break;
		}
		n++;
		}
		m=n;
		while(m>=0){
		a+=num%10*pow(10,m);
		num=num/10;
		m--;
		}
		}
	return a;
}