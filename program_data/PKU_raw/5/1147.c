
int main(){
int n,i,x,y,s=0;
char a[501],b[501];
double m,o;
scanf("%lf",&m);
scanf("\n%s",a);
scanf("\n%s",b);
x=strlen(a);
y=strlen(b);
if(x!=y)printf("error");
if(x==y){
for(i=0;i<x;i++){
	if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
		printf("error");
		return 0;
	}
}

	for(i=0;i<x;i++){
		if(a[i]==b[i])s=s+1;
}
o=1.0*s/x;
if(o>m)printf("yes");
else printf("no");
}

return 0;
}
