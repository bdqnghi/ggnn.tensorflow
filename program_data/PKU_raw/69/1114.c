

int main(void)
{
    char numA[MAXN];
    char numB[MAXN];
    char ans[MAXN];
    char c;
    int maxLen;
    int i,aLen,bLen,cx,ax,j,flag;
    scanf("%s",numA);
    scanf("%s",numB);
    aLen = strlen(numA);
    bLen = strlen(numB);
    for(i=0;i != aLen/2; i++){
        c = numA[i];
        numA[i] = numA[aLen-1-i];
        numA[aLen-1-i] = c;
    }
    for(i=0;i != bLen/2; i++){
        c = numB[i];
        numB[i] = numB[bLen-1-i];
        numB[bLen-1-i] = c;
    }
    cx = 0;
    maxLen = aLen > bLen ? aLen : bLen;
    for(i=0;i != maxLen;i++){
        if(i < aLen && i < bLen){
            ax = (numA[i]-'0') + (numB[i]-'0') + cx;
            ans[i] = (ax%10) + '0';
            if(ax >= 10){
                cx = 1;
            }
            else{
                cx = 0;
            }
        }
        else if(i >= bLen){
            ax = (numA[i]-'0') + cx;
            ans[i] = (ax%10) + '0';
            if(ax >= 10){
                cx = 1;
            }
            else{
                cx = 0;
            }
        }
        else if(i >= aLen){
            ax = (numB[i]-'0') + cx;
            ans[i] = (ax%10) + '0';
            if(ax >= 10){
                cx = 1;
            }
            else{
                cx = 0;
            }
        }
    }
    if(cx != 0){
        ans[i++] = cx + '0';
    }
    flag=0;
    for(j = i-1;j >= 0;j--){
        if(ans[j]!='0'){
          flag=1;
          }
          if(flag==1){
           printf("%c",ans[j]);
           }
           if(flag==0 && j==0){
             printf("0");
             }
    }
    return 0;
}
