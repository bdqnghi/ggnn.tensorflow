int main(){
int a,b,c,d,e,f,i,s=0;
int sz[10000];
for(i=0;i<10000;i++){
	scanf("%d",&sz[i]);
	if((i+1)%6==0){
		a=sz[i-5];
		b=sz[i-4];
		c=sz[i-3];
		d=sz[i-2];
		e=sz[i-1];
		f=sz[i];
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		if(d<a){
			d=d+12;
		}else if(d<12){
			d=d+12;
		}
		s=(3600*d+60*e+f)-(3600*a+60*b+c);
		printf("%d\n",s);
	}
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}
}
return 0;
}