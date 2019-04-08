int main(){
    char s[21];
    int n,i,j;
    int b[100]={0};
    scanf("%d",&n);
  
    for(i=0;i<n;i++){
    scanf("%s",s);
    for(j=0;j<strlen(s);j++){
        if(s[j]=='_'||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9'&&j>0)){
            continue;
        }else{
            b[i]=1;
            break;
        }
    }
    }
    for(i=0;i<n;i++)  {
    if(b[i]==0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    }   
    return 0;
}

