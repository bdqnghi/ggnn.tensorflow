int main(){
double link;
scanf("%lf",&link);
char a[501],b[501];
scanf("%s%s",a,b);
int c,d;
c=strlen(a);
d=strlen(b);
int i;
for(i=0;i<c;i++){
	if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T'){
	printf("error");
	return 0;
	}
}
for(i=0;i<d;i++){
	if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'){
	printf("error");
	return 0;
	}
}
if(c!=d){
printf("error");
return 0;
}
double same;
same=0;
for(i=0;i<c;i++){
	if(a[i]==b[i]){
		same=same+1;
	}
}
double hl;
hl=same/(c*1.0000);
if(hl<=link){
printf("no");
}else {
printf("yes");
}
return 0;
}