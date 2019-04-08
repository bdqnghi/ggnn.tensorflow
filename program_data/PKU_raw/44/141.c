
int reverse(int x);

int main()
{
	int i;
	int sz[6];

	for(i=0;i<6;i++){
		scanf("%d",&sz[i]);
	}

	for(i=0;i<6;i++){
		printf("%d\n",reverse(sz[i]));
	}
	
	return 0;
}

int reverse(int x){
	int a,b,c,d,e,k;

	k=abs(x);

	e=k/10000;
    d=(k-10000*e)/1000;
	c=(k-10000*e-1000*d)/100;
	b=(k-10000*e-1000*d-100*c)/10;
	a=k-10000*e-1000*d-100*c-10*b;

	
	if(x>=0){
		if(e==0&&d!=0)return a*1000+b*100+c*10+d*1;
	    if(e==0&&d==0&&c!=0)return a*100+b*10+c;
		if(e==0&&d==0&&c==0&&b!=0)return a*10+b;
		if(e!=0)return a*10000+b*1000+c*100+d*10+e;
		else return e;
	}

	else{
		if(e==0&&d!=0)return -(a*1000+b*100+c*10+d*1);
	    if(e==0&&d==0&&c!=0)return -(a*100+b*10+c);
		if(e==0&&d==0&&c==0&&b!=0)return -(a*10+b);
		if(e!=0)return -(a*10000+b*1000+c*100+d*10+e);
		else return -e;
	}

}