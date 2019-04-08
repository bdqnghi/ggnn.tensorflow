int main(){
    char str[1000];
    int len[300];
    int a=0,b,c,i,d,e=0;
    gets(str); 
    b=strlen(str);
    c=0;
     for(i=0;i<b-1;i++){                   
      if(str[i]!=' '){
        a++;                
      }
      else if(str[i]==' '&&str[i+1]!=' '){
        len[c]=a;
        e=c+1;
        c++;
        a=0;             
      }
      else if(str[i]==' '&&str[i+1]==' '){
      continue;
      }
     }
      len[c]=a+1;
     e++; 
     for(d=0;d<e-1;d++){
     printf("%d,",len[d]);                 
    }
    printf("%d",len[e-1]);
    return 0;
}