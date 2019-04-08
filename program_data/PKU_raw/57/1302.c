int main()
{
    int n,i,j,len;
    char s[33];
    len=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
    len=strlen(s);
    for(j=len-1;s[j]!='\0';j--){
        if(s[j]=='y'){
            s[j-1]='\0';
            break;
        }
        else if(s[j]=='g'){
            s[j-2]='\0';
            break;
        }
        else if(s[j]=='r'){
            s[j-1]='\0';
            break;
        }
    

    }
    printf("%s\n",s);
    }
    return 0;
    
}
