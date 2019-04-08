int main()
{int n,sum[100000],a,b,c;
 struct xues{int a,b,c;} s[100000];
 scanf ("%d",&n);
 int i;
 for(i=0;i<n;i++){
	 scanf("%d%d%d",&s[i].a,&s[i].b,&s[i].c);
	 sum[i]=s[i].b+s[i].c;
 }
 int fir=0,sec=0,thi=0;
 for(i=0;i<n;i++){
     if(fir<sum[i]){
	    thi=sec;
		sec=fir;
		fir=sum[i];
		c=b;
		b=a;
		a=s[i].a;
	 }
	 else if(sec<sum[i]){
	 thi=sec;
	 sec=sum[i];
	 fir=fir;
	 a=a;
	 c=b;
	 b=s[i].a;
	 }
	 else if(thi<sum[i]){
	 fir=fir;
	 sec=sec;
	 thi=sum[i];
	 a=a;
	 b=b;
	 c=s[i].a;
	 }
 }
 printf("%d %d\n%d %d\n%d %d",a,fir,b,sec,c,thi);
	return 0;
}

