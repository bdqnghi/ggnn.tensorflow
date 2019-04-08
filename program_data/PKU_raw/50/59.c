
int main(){
	int w,a=0,b,c,d;
	scanf("%d",&w);
	static int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<13;i++)
	{	a=a+p[i];
		b=a+12;
		c=b%7;
		d=w+c;
		if(d%7==5)
			printf("%d\n",i+1);
	}	
	return 0;
}	
