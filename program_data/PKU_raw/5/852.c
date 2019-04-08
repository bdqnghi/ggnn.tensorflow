int main(){
    double n,p;
    int i;
    int k=0,s=0;
    char zfc1[500],zfc2[500];
    scanf("%lf",&n);
    scanf("%s",zfc1);
    scanf("%s",zfc2);
    int a=strlen(zfc1),b=strlen(zfc2);
    if(a!=b){
        printf("error");
      }else {for(i=0;i<a;i++)
      {if((zfc1[i]=='A'||zfc1[i]=='T'||zfc1[i]=='C'||zfc1[i]=='G')&&(zfc2[i]=='A'||zfc2[i]=='T'||zfc2[i]=='C'||zfc2[i]=='G')){
      s++;
      } if(zfc1[i]==zfc2[i]){
                k++;
            }}
    if(s==a) {     
        p=1.0*k/a;
        if(p>n){printf("yes");}
        else{printf("no");}
    }else{printf("error");}
    
}return 0;
}

