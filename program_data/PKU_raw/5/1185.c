int main(){
    double m,a,b,t=1,k=0,s=1,result;
    char r[501],e[501];
    int i;
    scanf("%lf",&m);
    scanf("%s",r);
    scanf("%s",e);
    a=strlen(r);
    b=strlen(e);
    if(a!=b){
             printf("error");}        
    for(i=0;i<(a-1);i++){
          if((r[i]=='A')||(r[i]=='T')||(r[i]=='C')||(r[i]=='G')){
                t++;};
          if((e[i]=='A')||(e[i]=='T')||(e[i]=='C')||(e[i]=='G')){
                s++;}; 
                }                                                                                                     
    if((t==a)&&(s==b)&&(a==b)){
      for(i=0;i<a-1;i++){            
       if(r[i]==e[i]){k++;};
       };    
       result=k/(a-1);          
    if(result>m){
                printf("yes");}else{
                   printf("no");};
                   }
                   if(((t!=a)||(s!=b))&&(a==b)){
          printf("error");}
	 return 0;
}

