int main(){
	int n;
	scanf("%d",&n);
	int a=0,b=0,c=0,d=0,e=0,f=0;
	while(1){
		if(n-100*a>=100){
			a++;
		}else if(n-100*a-50*b>=50){
			b++;
		}else if(n-100*a-50*b-20*c>=20){
			c++;
		}else if(n-100*a-50*b-20*c-10*d>=10){
			d++;
		}else if(n-100*a-50*b-20*c-10*d-5*e>=5){
			e++;
		}else
		break;
			f=n-100*a-50*b-20*c-10*d-5*e;
	}
			printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
			return 0;
	}