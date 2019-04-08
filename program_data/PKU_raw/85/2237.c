int main() {
    int n,i,a;
    scanf("%d",&n);
    char zfc[n][21];
    for(i=0;i<n;i++) {
        scanf("%s",zfc[i]);
    }
    int len,result;
    for(i=0;i<n;i++) {
        result=0;
        len=strlen(zfc[i]);
        if(zfc[i][0]!='_') {
            if(zfc[i][0]<'A') {
                result++;
            }
            if(zfc[i][0]>'Z'&&zfc[i][0]<'a') {
                result++;
            }
            if(zfc[i][0]>'z') {
                result++;
            }
        }
        for(a=1;a<len;a++) {
            if(zfc[i][a]!='_') {
                if(zfc[i][a]<'0') {
                    result++;
                }
                if(zfc[i][a]>'9'&&zfc[i][a]<'A') {
                    result++;
                }
                if(zfc[i][a]>'Z'&&zfc[i][a]<'a') {
                    result++;
                }
                if(zfc[i][a]>'z') {
                    result++;
                }
            }
        }
        if(result==0) {
            printf("yes\n");
        }
        if(result!=0) {
            printf("no\n");
        }
    }
    return 0;
}


