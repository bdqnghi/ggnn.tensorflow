int main(){
	int a,b,c,d,e,f,s;
	int a1,b1,c1,d1,e1,f1,s1;
    while(1){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if((a*a+b*b+c*c+d*d+e*e+f*f)!=0){a1=a;
	b1=b;
	c1=c;
	d1=d;
	e1=e;
	f1=f;
	}
	else{break;}
    s=(d1-a1+12)*3600+(e1-b1)*60+(f1-c1);
	printf("%d\n",s);
	}
	return 0;
}