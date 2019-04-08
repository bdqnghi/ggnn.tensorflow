int main(){
double n,m;
int i,s=0,p,q,j;
char s1[501];
char s2[501];
char string[100];
char no[100]={"no"};
char y[100]={"yes"};
char e[100]={"error"};
    scanf("%lf\n",&n);
    scanf("%s\n",s1);
    scanf("%s\n",s2);
    p=strlen(s1);
    q=strlen(s2);
   if(p==q){
       for(j=0;j<p;j++){
           if(s1[j]==s2[j]){
                s=s+1;
            }
        }
        m=s*1.0/p;
        if(m>n){
            strcpy(string,y);
           
        }else{
            strcpy(string,no);
        }
    }else{
        strcpy(string,e);
    }   
    
    if(p==q){
       for(j=0;j<p;j++){
          if(s1[j]!='A'&&s1[j]!='T'&&s1[j]!='C'&&s1[j]!='G'||s2[j]!='A'&&s2[j]!='T'&&s2[j]!='C'&&s2[j]!='G'){
          strcpy(string,e);
    }
  }
}  
   printf("%s",string);
    return 0;
}

        