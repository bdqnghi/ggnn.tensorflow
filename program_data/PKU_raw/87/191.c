int main()
{
	int a,b,c,d,e,f,x=0,i;
	for(i=0;i<100;i++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
         x=0;
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}else{
	if(f>=c){
		x+=f-c;
	}else if(f<c){
		x+=60+f-c;
		e--;
	}if(e>=b){
		x+=60*(e-b);
	}else{
		x+=60*(60+e-b);
		d--;
	}d=d+12;
		x+=3600*(d-a);
	
	printf("%d\n",x);
	}
	}
	return 0;
}

