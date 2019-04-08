



int main(){
char zf[100];
char zq[100];
char cu[100];
char dt[100][100];
int i,l,lc,j,lz,k=0,t,m,n=0,len,ci;
gets(zf);
gets(cu);
gets(zq);
l=strlen(zf);
lc=strlen(cu);
lz=strlen(zq);
for(i=0;i<l;i++){
    if(zf[i]==cu[0]){
         ci=1;
		for(j=0;j<lc;j++,i++){
			if(zf[i]!=cu[j]){
			   ci=0;
			   break;
			}
	      
		}
		if(ci==1){
			t=i-lc;
		   for(j=0;j<lc;j++,t++){
			   zf[t]=zq[j];

		   }
		   break;
		   
		}
	}
}
      
          printf("%s",zf);

return 0;
}
