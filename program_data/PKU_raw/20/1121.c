

int main()
{
     int i,mark,n,m,k;
     char str[13],substr[13];
     char a[26];
     while(scanf("%s %s",str,substr)!=EOF)
     {
           n=strlen(str);
           m=strlen(substr);
           mark=0;
           for(i=0;i<n;i++)
               if(str[i]>str[mark])  mark=i;
           for(i=0;i<mark+1;i++)
               a[i]=str[i];
           for(;i<mark+m+1;i++)
               a[i]=substr[i-mark-1];
           for(;i<n+m;i++)
               a[i]=str[i-m];
           a[i]='\0';
           printf("%s\n",a);
     }
}
