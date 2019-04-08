int main(){
int i,a,b,c=0;
double e,d;
char x[256],y[256];
scanf("%lf",&d);
scanf("%s",x);
scanf("%s",y);
a=strlen(x);
b=strlen(y);
if(a!=b){
	printf("error");}
else if(a==b){
	for(i=0;i<a;i++){
		if((x[i]!='A'&&x[i]!='T'&&x[i]!='C'&&x[i]!='G')||(y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G')){
		printf("error");
		return 0;}else{
			if(x[i]==y[i]){
				c+=1;}
}
	}
	e=1.0*c/a;
	if(e>=d){printf("yes");}else{printf("no");}}


return 0;
}
