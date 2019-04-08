int main() {
    int n,i,j;
    scanf("%d", &n);
    char a[21][21];
    int b[21][21],c[100];
    for(i=0;i<n;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<21;j++){
            b[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        scanf("%s", a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<strlen(a[i]);j++){
            if(((a[i][j]>='0')&&(a[i][j]<='9'))||((a[i][j]>='a')&&(a[i][j]<='z'))||((a[i][j]>='A')&&(a[i][j]<='Z'))||(a[i][j]=='_')){b[i][j]=0;
              }
            else{b[i][j]=1;}
        }
    }
    for(i=0;i<n;i++){
        if((a[i][0]>='0')&&(a[i][0]<='9')){
            b[i][0]=1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<21;j++){
            c[i]=c[i]+b[i][j];
        }
    }
    for(i=0;i<n;i++){
        if(c[i]==0){
            printf("yes\n");
        }
        else printf("no\n");
        
    }
    return 0;
}