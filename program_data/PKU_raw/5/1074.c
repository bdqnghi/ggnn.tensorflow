int main(){
int i;
char d[3][501];
double n,m,a,b,c,x;
x=0;
scanf("%lf",&a);
scanf("%s",&d[1]);
scanf("%s",&d[2]);
n=strlen(d[1]);
m=strlen(d[2]);
for(i=0;i<n;i++){
	if((d[1][i]!='A'&&d[1][i]!='G'&&d[1][i]!='C'&&d[1][i]!='T')||(d[2][i]!='A'&&d[2][i]!='G'&&d[2][i]!='C'&&d[2][i]!='T')){
		x++;
	}
}
if(m!=n||x>0){
	printf("error");
}else{
for(i=0;i<n;i++){
	if(d[1][i]==d[2][i]){
		b++;
	}
}
c=b/n;
if(c>a){
	printf("yes");
}else{
	printf("no");
}
}
return 0;
}