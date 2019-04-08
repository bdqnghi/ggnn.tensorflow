int reverse (int num){
	int result,a,b,c,d,e;
	if(num==0){
		result=0;
	}
	else if(num>9999){
		a=num/10000;
		b=(num-10000*a)/1000;
		c=(num-10000*a-1000*b)/100;
		d=(num-10000*a-1000*b-100*c)/10;
		e=num-10000*a-1000*b-100*c-10*d;
		result=10000*e+1000*d+100*c+10*b+a;
	}

	else if(num>999){
		a=num/1000;
		b=(num-1000*a)/100;
		c=(num-1000*a-100*b)/10;
		d=num-1000*a-100*b-10*c;
		result=1000*d+100*c+10*b+a;
	}
	else if(num>99){
		a=num/100;
		b=(num-100*a)/10;
		c=num-100*a-10*b;
		result=100*c+10*b+a;
	}
	else if(num<=99&&num>9){
		b=num/10;
		c=num-10*b;
		result=10*c+b;
	}
	else if(num<=9){
		result=num;
	}
	if(num<0){
		result=-reverse(-num);
	}
	return result;
}
int main(){
 int n,i,r;
 for(i=0;i<6;i++){
	 scanf("%d",&n);
	 r=reverse(n);
	 printf("%d\n",r);
 }
 return 0;
}

 
 