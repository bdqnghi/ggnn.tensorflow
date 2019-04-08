int main()
{
    int i,n;
    char a[500]={0},b[500]={0};
    scanf("%d",&n);
    while(n--){
        scanf("%s",a);
        printf("%s\n",a);
        i = 0;
        while(a[i]!='\0'){
            if(a[i]=='('){
                b[i]='$';
            }else if(a[i]==')'){
                int k;
                for(k=i-1;k>=0;k--){
                    if(b[k]=='$'){
                        b[i]=b[k]=' ';
                        break;
                    }
                }
                if(k==-1)
                    b[i]='?';
            }else{
                b[i]=' ';
            }
            i++;
        }

        printf("%s",b);
        printf("\n");
        memset(b, 0, 500);
        memset(a, 0, 500);
        fflush(stdin);
    }
    return 0;
}
