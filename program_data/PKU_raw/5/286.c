
int main(){
	char x[501],y[501],m=0,n=0,i,p=0,q=0;
	double a,b;
	scanf("%lf",&a);
	scanf("%s",x);
	scanf("%s",y);
	for(i=0;x[i];i++){
		if(x[i]!='A'&&x[i]!='C'&&x[i]!='G'&&x[i]!='T'){
			q++;
		}
		m++;
	}
	for(i=0;y[i];i++){
		if(y[i]!='A'&&y[i]!='C'&&y[i]!='G'&&y[i]!='T'){
			q++;
		}
		p++;
	}
	if(m!=p||q!=0){
		printf("error");
	}else{
		for(i=0;i<m;i++){
			if(x[i]==y[i]){
				n++;
			}
		}
		b=1.0*n/m;
		if(b>a){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}
