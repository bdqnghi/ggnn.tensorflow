int main(){
    char xulie[LEN],daxiezimu[LEN1],xiaoxiezimu[LEN1],*ps;
    int daxiecishu[LEN2],xiaoxiecishu[LEN2];
    int a=0,b,c=0,d,e,f,i;
    scanf("%s",xulie);
    for(b=0;b<LEN2;b++){
      daxiecishu[b]=0;
      xiaoxiecishu[b]=0;
    }
    for(i=0;i<strlen(xulie);i++){
      if(xulie[i]>='A'&&xulie[i]<='Z'){
        daxiezimu[xulie[i]-'A']=xulie[i];
        daxiecishu[xulie[i]-'A']++;
        c++;
      }
      if(xulie[i]>='a'&&xulie[i]<='z'){
        xiaoxiezimu[xulie[i]-'a']=xulie[i];
        xiaoxiecishu[xulie[i]-'a']++;
        a++;
      }  
    }
    if(a+c!=0){
    for(e=0;e<LEN1-1;e++){
      if(daxiecishu[e]!=0){
        printf("%c=%d\n",daxiezimu[e],daxiecishu[e]);
      } 
    }
    
     for(f=0;f<LEN1-1;f++){
      if(xiaoxiecishu[f]!=0){
        printf("%c=%d\n",xiaoxiezimu[f],xiaoxiecishu[f]);
      } 
    }
    }
    if(a+c==0){
      printf("No");           
    }
    return 0;
}