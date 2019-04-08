void f(char *s,char *a,char *b,int n1,int n2)
{
        int i,j,k,m,n;
        char c[100];
        char d[100];
        for(i=0,j=0;*(s+j)!='\0';)
        {
                int flag=1;
                for(m=0;*(s+j)!=' '&&s[j]!='\0';m++,j++)
                {
                        d[m]=s[j];
                        if(s[j+1]=='\0')
                                flag=0;
                }
                d[m]='\0';
                j=j-m;
                if(strcmp(d,a)!=0)
                {
                        for(n=0;n<=m;i++,j++,n++)
                                *(c+i)=*(s+j);
                }
                else
                {
                        for(k=0,n=0;n<n2;i++,k++,n++)
                                *(c+i)=*(b+k);
                        j=j+n1;
                }
                if(flag==1)*(c+i)=' ';
                else break;
        }
        *(c+i)='\0';
        printf("%s",c);
}

void main()
{
        char s[100],a[100],b[100];
        int n1,n2;
        gets(s);
        gets(a);
        gets(b);
        n1=strlen(a);
        n2=strlen(b);
        f(s,a,b,n1,n2);
}