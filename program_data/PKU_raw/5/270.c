int main(){
double x,y;
int l,i,xg=0,cw=0;
char jy[2][500];
scanf("%lf",&x);
scanf("%s %s",jy[0],jy[1]);
if(strlen(jy[0])==strlen(jy[1])){
l=strlen(jy[0]);
 for(i=0;i<l;i++){
	 if(jy[0][i]==jy[1][i]){
	 xg++;
	 }
	 if((jy[0][i]!='A'&&jy[0][i]!='T'&&jy[0][i]!='C'&&jy[0][i]!='G')||
		 (jy[1][i]!='A'&&jy[1][i]!='T'&&jy[1][i]!='C'&&jy[1][i]!='G')){
	 cw++;
	 }
 }
 y=1.0*xg/l;
}
else if(strlen(jy[0])!=strlen(jy[1])){
cw++;
}
if(cw==0){
	printf(y>x?"yes":"no");
}
else if(cw!=0){
printf("error");
}
return 0;

}