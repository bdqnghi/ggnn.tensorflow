int main(){
	int a,b,c,d,e,f,sum=0,s,m,h,i;
	for(i=1;i>0;i++){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		else{
		d=d+12;
		if(f>=c){
			s=f-c;
		}
		else{
			s=60+f-c;
			e=e-1;
		}
		if(e>=b){
			m=e-b;
		}
		else{
			m=60+e-b;
			d=d-1;
		}
		h=d-a;
		sum=3600*h+(60*m)+s;
		printf("%d\n",sum);
	}
	}
	return 0;
}