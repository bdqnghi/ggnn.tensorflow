int main(){
	int a,b,c,d,e,f,i,h,j,z;
	for(i=0;i<100000;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		else{
		d=d+11;
		e=e+59;
		f=f+60;
		h=d-a;
		i=e-b;
		j=f-c;
		z=h*60*60+i*60+j;
		printf("%d\n",z);
		}
	}
	return 0;
}