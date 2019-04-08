int main(){
    char s[256];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s);
        for(int j=0;j<strlen(s);j++){
            switch(s[j]){
                case'A':s[j]='T';
                break;
                case'T':s[j]='A';
                break;
                case'G':s[j]='C';
                break;
                case'C':s[j]='G';
                break;
            }
        }printf("%s\n",s);
    }
    return 0;
}