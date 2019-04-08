long m[100000];
long come(long c,long s)
{
	long a,b=1,d,e,f,g;
	if((c/10)==0&&s>=2)return(0);
	else if((c/10)==0||(((c/10)-(c%10))==0&&s==2))
		return(1);
	else{for(a=1;a<s;a++)b*=10;d=c/b;e=c%10;
	if(d!=e)return(0);else{f=c/10-d*b/10;return(come(f,(s-2)));}}
}
long go(long c,long q)
{
	long a;
	for(a=3;a<q;a=a+2)
		if((c%a)==0)
		return(0);
	return(1);
}
void main()
{
	long a,b,c,d,e,n=0,i,j,p,q,s,t;
	scanf("%ld %ld",&a,&b);a=(a/2)*2+1;
	for(c=a;c<=b;c=c+2)
	{q=sqrt(c)+1;
	i=go(c,q);if(i==0){continue;}else{s=1;t=c;while((t/10)!=0){t=t/10;s++;}j=come(c,s);
	if(j==1){m[n]=c;n++;}}
	}if(n==0)printf("no");
	else{printf("%ld",m[0]);
	for(p=1;p<n;p++)printf(",%ld",m[p]);}
}
