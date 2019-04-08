int main(){
    int n,i;
    int l[50];
    char w[50][33];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%s\n",w[i]);
        l[i]=strlen(w[i]);
    }
    for(i=0;i<n;i++){
        if(w[i][(l[i])-1]=='r'){
            l[i]-=2;
        }else if(w[i][(l[i])-1]=='y'){
            l[i]-=2;
        }else if(w[i][(l[i])-1]=='g'){
            l[i]-=3;
        }
    }
    for(i=0;i<n;i++){
        for(int j=0;j<l[i];j++){
            printf("%c",w[i][j]);
        }
        printf("\n");
    }
    return 0;
}

