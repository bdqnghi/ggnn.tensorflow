

int main() {
    int n, i, j;
    char data[100][21];
    int num[100]={0};
    scanf("%d" ,&n);
    for(i=0;i<n;i++) {
        scanf("%s", data[i]);
    }
    for(i=0;i<n;i++) {
        if(data[i][0]<='9'&&data[i][0]>='0') {
                num[i]++;
            continue;
            }
        for(j=0;data[i][j]!='\0';j++) {
            if((data[i][j]<='Z'&&data[i][j]>='A')||(data[i][j]>='a'&&data[i][j]<='z')||(data[i][j]>='0'&&data[i][j]<='9')||data[i][j]=='_') {}
            else {
                num[i]++;
            }
        }
    }
    for(i=0;i<n;i++) {
        if(num[i]!=0) {
            printf("no\n");
        } else {
            printf("yes\n");
        }
    }
    return 0 ;
}
        