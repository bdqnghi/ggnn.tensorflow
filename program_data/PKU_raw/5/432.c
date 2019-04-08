int main()
{
double a,b,s,g;
scanf("%lf\n",&a);
char nm[501];
char qw[501];
gets(nm);
gets(qw);
int d,f,c,e,k;
c=0;
e=0;
k=0;
d=strlen(nm);
f=strlen(qw);
if(d!=f){
c=0;
} else{
	c=1;
      for(int h=0;h<d;h++){
if((nm[h]!='A'&&nm[h]!='T'&&nm[h]!='C'&&nm[h]!='G')||(qw[h]!='A'&&qw[h]!='T'&&qw[h]!='C'&&qw[h]!='G')){
			  e=e+1;
		  }
if(nm[h]==qw[h]){
			  k=k+1;
					  }
		  }
}
if(c==0||e!=0){
	printf("error");
}
if(c!=0&&e==0){
s=k*1.0;
g=d*1.0;
b=s/g;
if(b>=a){
printf("yes");
}
if(b<a){
printf("no");
}
}
}