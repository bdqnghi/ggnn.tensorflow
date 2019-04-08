int main(){
    char  cs[300],jg[200]={'\0'};
    gets(cs);
    int i,t=0,m;
    for(i=0;cs[i]!='\0';i++){
                             if(cs[i]!=' '){
                                         jg[t]=cs[i];
                                         t++;
                                         }
                             else{
                                  jg[t]=' ';
                                  t++;
                                  for(m=1;cs[i+m]==' ';m++);
                                  i+=m-1;
                                  }
                                  } 
    printf("%s",jg);
    
    return 0;
}