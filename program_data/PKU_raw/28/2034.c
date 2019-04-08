int main(){
    int s[500]={0},i,k,x;
    char d[10000];
    gets(d);
    k=0;
    for(i=0;d[i]!=0;i++){
        if(d[i]!=' '){
            s[k]++;
        }else{
            k++;
            s[k]=0;
        }
    }
    for(x=0;x<=k;x++){
        if(x==0&&s[x]!=0){
            printf("%d",s[x]);
        }
        if(x>0&&s[x]!=0){
            printf(",%d",s[x]);
        }
    }
    return 0;
}
