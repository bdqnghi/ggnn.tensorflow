int main(){
    char s[MAX+1],a[MAX+1];
    gets(s);
    int l=strlen(s);
    int i,j=0;
    for(i=0;i<=l;i++){   

        /*for(j=0;j<l;j++){
        if(s[i]==s[i-1]==' '){
            continue;
        }
        a[j]=s[i];
        }*/
        if(i!=0)
        if(s[i-1]==s[i]&&s[i]==' ') continue;
        
        a[j]=s[i]; j++;
    }
    puts(a);
    return 0;
}
