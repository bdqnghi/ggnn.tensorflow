int main()
{
    char s[10000];
    int max_end,max_len=0,min_end,min_len=10000,l,i,j,k=0;
    gets(s);
    l=strlen(s);
    for(i=0;i<=l;i++)
        if(s[i]==' '||s[i]==','||i==l)
        {
            if(k<min_len&&k>0) {min_len=k;min_end=i;};
            if(k>max_len) {max_len=k;max_end=i;};
            k=0;
        }
        else k++;
    //printf("%d %d %d %d\n",max_end,max_len,min_end,min_len);
    for(i=max_end-max_len;i<max_end;i++) printf("%c",s[i]);
    printf("\n");
    for(i=min_end-min_len;i<min_end;i++) printf("%c",s[i]);
}
