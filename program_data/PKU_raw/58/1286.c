int main()
{
    int i,j,n;
    char m[3],s[100][81];   
    gets(m);
    n=atoi(m);
    
    for(i=0;i<n;i++){
        gets(s[i]);
        int num=0;
        if(s[i][0]=='_'||(64<s[i][0]&&s[i][0]<91)||(96<s[i][0]&&s[i][0]<123)){
            for(j=0;j<strlen(s[i]);j++)
                if((47<s[i][j]&&s[i][j]<58)||(64<s[i][j]&&s[i][j]<91)||(96<s[i][j]&&s[i][j]<123)||s[i][j]=='_')   
                    num++;
            if(num==strlen(s[i]))
                printf("1\n");
            else
                printf("0\n");
        }
        else
            printf("0\n");    
    } 
}