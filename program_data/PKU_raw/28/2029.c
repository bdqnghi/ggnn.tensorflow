int main(){
    char sen[300*20];
    int i,k=0,wordlen=0,a[300];
    gets(sen);
    for(i=0;i<strlen(sen);i++){
        if(sen[i]==' '){
            if(wordlen!=0){a[k]=wordlen;
            k++;}
            wordlen=0;
        }else{wordlen++;}
    }a[k]=wordlen;
    for(i=0;i<k;i++){
        printf("%d,",a[i]);
    }printf("%d",a[k]);
        return 0;
    }

