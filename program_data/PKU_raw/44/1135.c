int reverse(int num){
	int a,b,c,d,e;
	int z;
	a=num/10000;
	b=num%10000/1000;
	c=num%1000/100;
	d=num%100/10;
	e=num%10;
	if(a!=0){
		z=e*10000+d*1000+c*100+b*10+a;
	}
	else if(a==0&&b!=0){
		z=e*1000+d*100+c*10+b;	
	}
	else if(a==0&&b==0&&c!=0){
		z=e*100+d*10+c;	
	}
	else if(a==0&&b==0&&c==0&&d!=0){
		z=e*10+d;
	}
	else if(a==0&&b==0&&c==0&&d==0){
		z=num;
	}
	return z;
}

int main()
{	int n;
	int i;
	for(i=0;i<6;i++){
		scanf("%d",&n);
		printf("%d\n",reverse(n));
	}
	return 0;
}
