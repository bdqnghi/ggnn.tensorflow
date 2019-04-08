int main(){
    char zfc[300];
    char zm[27]="abcdefghijklmnopqrstuvwxyz";
    int sz[26];
    int i,j,len;
    int result=0;
    scanf("%s",zfc);
    len=strlen(zfc);
    for(i=0;i<26;i++){
        sz[i]=0;
        for(j=0;j<len;j++){
            if(zfc[j]==zm[i]){
               sz[i]++;
            }
        }
    }
    for(i=0;i<26;i++){
        if(sz[i]!=0){
           printf("%c=%d\n",zm[i],sz[i]);
        }
    }
    for(i=0;i<26;i++){
        result+=sz[i];
    }
    if(result==0){
       printf("No");
    }
    return 0;
}
