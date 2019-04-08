int f(int x){
	int a,b,c,d,e,j;
	a=x%10;
	b=x/10000;
	c=x/1000%10;
	d=x/100%10;
	e=x/10%10;
	if(b!=0)j=a*10000+e*1000+d*100+c*10+b;
	if(b==0&&c!=0)j=a*1000+e*100+d*10+c;
	if(b==0&&c==0&&d!=0)j=a*100+e*10+d;
	if(b==0&&c==0&&d==0&&e!=0)j=a*10+e;
	if(b==0&&c==0&&d==0&&e==0&&a!=0)j=a;
	if(x==0)j=0;
	if(x==-0)j==-0;
	return(j);
}
int main(int argc, char* argv[])
{	int a[6],b[6],i;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
		b[i]=f(a[i]);
	}
	for(i=0;i<6;i++){
		printf("%d\n",b[i]);
	}

	return 0;
}
