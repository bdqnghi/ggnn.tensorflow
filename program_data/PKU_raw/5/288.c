int main(){
int i;
double n,p=0,a,b,m=0;
char s1[500],s2[500];
scanf("%lf",&n);
scanf("%s",s1);
scanf("%s",s2);
a=strlen(s1);
for(i=0;i<a;i++){
	if((s1[i]!='A'&&s1[i]!='T'&&s1[i]!='C'&&s1[i]!='G')||(s2[i]!='A'&&s2[i]!='T'&&s2[i]!='C'&&s2[i]!='G')){
		m=1;
		break;
	}
	if(s1[i]==s2[i]){
		p++;
	}
}
if(m==1){
	printf("error");
}else{
b=p/a;
if(b>n){
	printf("yes");
}else{
	printf("no");
}
}
return 0;
}