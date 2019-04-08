int main()
{
        char str[50][30];
        int n,i,len;
        scanf("%d",&n);
        for(i=0;i<n;i++){
               scanf("%s",str[i]);
        }
        for(i=0;i<n;i++){
               len=strlen(str[i]);
               if(str[i][len-2]=='e') str[i][len-2]='\0';
               else if(str[i][len-2]=='l') str[i][len-2]='\0';
               else if(str[i][len-2]=='n') str[i][len-3]='\0';
               printf("%s\n",str[i]);
        }
        return 0;
}
