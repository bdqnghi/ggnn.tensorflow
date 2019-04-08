int main(){
    char str[257],sub[257],rep[257];
    int result=0;
    int a,b,c,i,d,e=0,f,g,h,j,k;
    int len[256];
    gets(str);
    gets(sub);
    gets(rep);
    a=strlen(str);
    b=strlen(sub);
    c=strlen(rep);
    for(i=0;i<a;i++){
      for(d=0;d<b-1;d++){
        if((str[i+d]==sub[d])&&(str[i+d+1]==sub[d+1])){
          result=1;
          len[e]=i;
          e++;                                      
        }
        break;
      }               
    }
    f=len[0];
    if(result==1){
    for(g=0;g<f;g++){
     printf("%c",str[g]);                  
    }
    for(h=0;h<c;h++){
     printf("%c",rep[h]);                 
    }
    for(j=0;j<a-f-b;j++){
     printf("%c",str[f+b+j]);                     
    }                 
    }
    else if(result==0){
     puts(str);
    }
    return 0;
}