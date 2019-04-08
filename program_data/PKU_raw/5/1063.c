int main (){
char a[501], b[501];
double n,y,x,m,q,p;
x=0;
p=1;
scanf("%lf",&n);
scanf("%s",a);
scanf("%s",b);
m=strlen(a);
q=strlen(b);
for(int i=0;i<m;i++){if(a[i]!='A'&&a[i]!='C'&&a[i]!='G'&&a[i]!='T'){p=0;break;}}
for(int i=0;i<q;i++){if(b[i]!='A'&&b[i]!='C'&&b[i]!='G'&&b[i]!='T'){p=0;break;}}
if(m!=q){p=0;}
if(p==0){printf("error");}
else {
	for (int i=0;i<m;i++){
		if (a[i]==b[i]){x++;}
}y=x/m;
	if(y>n){printf("yes");}
	else{printf("no");}}
return 0;
}


