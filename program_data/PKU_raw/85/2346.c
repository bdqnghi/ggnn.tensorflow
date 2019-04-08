int main(){
    int n;
    int sum=0;
    int m[1000];
    char c[1000][22];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",c[i]);
        m[i]=strlen(c[i]);
      //  printf("%s\n",c[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m[i];j++){
            if(((c[i][0]>='A'&&c[i][0]<='Z')||(c[i][0]>='a'&&c[i][0]<='z')||c[i][0]=='_')&&((c[i][j]>='A'&&c[i][j]<='Z')||(c[i][j]>='a'&&c[i][j]<='z')||c[i][j]=='_'||(c[i][j]>='0'&&c[i][j]<='9')))
            sum++;
        }
        if(sum==m[i])printf("yes\n");
        else printf("no\n");
        sum=0;
    }
}