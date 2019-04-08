int main(){
    char n[100];
    gets(n);
    int m=atoi(n);
    for(int j=0;j<m;j++){
            int bar=0;
            char a[100];
            gets(a);
            int len=strlen(a);
            if((a[0]<=90&&a[0]>=65)||a[0]==95||(a[0]>=97&&a[0]<=122)){
                        for(int i=0;i<len&&bar==0;i++){
                                      if((a[i]<65&&a[i]>57)||a[i]<48||(a[i]>90&&a[i]<97&&a[i]!=95)||a[i]>122){
                                               bar=1;
                                      }
                        }
                        if(bar==1){
                                   bar=0;
                        }
                        else if(bar==0){
                                   bar=1;
                        }
            }
            if(bar==0){
                 printf("0\n");
            }
            if(bar==1){
                 printf("1\n");
           }
    }   
    return 0;
}
                       
                             
