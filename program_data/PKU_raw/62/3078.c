int main(){
	int i=0,m,cd,q[100],z[100],b;
	char dc[100]={'0','0','0'};
	  gets(dc);
       cd=strlen(dc);
	for(m=0;m<cd;m++){
   if(m==0||(dc[m-1]==' '&&dc[m]!=' '))q[i]=m;
   if(((dc[m]==' '||dc[m]==','||dc[m]=='.')&&(dc[m-1]!=' '&&dc[m-1]!=','&&dc[m-1]!='.'))||m==cd-1){z[i]=m;i=i+1;}
  }
	for(m=0;m<i;m++){
		for(b=q[m];b<=z[m];b++){
       printf("%c",dc[b]);
		}
	}
	  return 0;
}
