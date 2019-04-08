int main(){
    char zfc[101],jg[101];
    int i,m=0;
    gets(zfc);
    for(i=0;zfc[i]!='\0';i++){
        if(zfc[i]!=' '){
            jg[m]=zfc[i];
            m+=1;
        }else if(zfc[i]==' '&&zfc[i+1]!=' '){
            jg[m]=zfc[i];
            m+=1;
        }else{
            continue;
        }
    }
     jg[m]='\0';
      printf("%s\n",jg);
    return 0;
}



