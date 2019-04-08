int main(){
    char dk[300],su;
    int i,j,sum=0,m=0;
    gets(dk);
    for(i=97;i<=122;i++){

        for(j=0;dk[j]!='\0';j++){
            if(dk[j]==i){
                sum+=1;
             
            }
            if(sum!=0)m+=1;
        }
    su=i;
    if(sum>=1)        printf("%c=%d\n",su,sum);
    sum=0;
    }
    if(m==0)printf("No");

    return 0;
}
