int main(){
    char s[21];
    int n,i,j,p[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        p[i]=1;
        for(j=1;j<strlen(s);j++){
            if(s[0]=='_'||s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'){
                if(s[j]=='_'||s[j]>='a'&&s[j]<='z'||s[j]>='A'&&s[j]<='Z'||s[j]>='0'&&s[j]<='9'){
                    p[i]=1;
                }else{
                    p[i]=0;
                    break;
                }
            }else{  p[i]=0;
                    break;
            }
        }
    } 
       for(i=0;i<n;i++){
           if(p[i]){
               printf("yes\n");
           }else{
               printf("no\n");
           }
       }
       return 0;
}


