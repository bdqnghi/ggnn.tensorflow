void main()
{
        char str[14],substr[4];
        char str1[14],str2[14];
        int i=0,n,k;
        char max;
        while(scanf("%s%s",str,substr)!=EOF)
       { n=strlen(str);
        for(i=0,max=str[0];i<n;i++)
                max=(max>=str[i])?max:str[i];
        for(i=0;i<n;i++)
        {
                if(str[i]==max)break;
        }
        k=i;
        strncpy(str1,str,k+1);
        str1[k+1]='\0';
        for(i=0;i<n-k-1;i++)
                str2[i]=str[k+1+i];
        str2[i]='\0';
        strcat(str1,substr);
        strcat(str1,str2);
        printf("%s\n",str1);
       }
}