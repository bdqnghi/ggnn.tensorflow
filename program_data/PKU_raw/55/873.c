


int main()
{
    int a,b,l,decimal=0;
    char c[40];
    int i;
    scanf("%d %s %d",&a,c,&b);
    l=strlen(c);
    if(c[0]=='0') printf("0\n");
    else
    {
        for(i=0;i<l;i++)
        {
                        if(c[i]>='A'&&c[i]<='Z') c[i]=c[i]+'a'-'A';
        }
        int d[40];
        for(i=0;i<l;i++)
        {
                        if(c[i]>='a') c[i]=c[i]+10-'a';
                        else c[i]=c[i]-'0';
                        d[i]=1;
                        for(int j=0;j<l-i-1;j++)
                        {
                                          d[i]=d[i]*a;
                        }
        decimal=decimal+d[i]*c[i];    
        }
        char e[40];
        int k,y;
        for(k=0;decimal!=0;k++)
        {                  
                        e[k]=decimal%b;
                        decimal=decimal/b;                     
        }
        e[k]='\0';
        char f[40];
        for (y=0;y<k;y++)
        {
            if(e[y]<10)
            f[k-1-y]=e[y]+'0';
            else
            f[k-1-y]=e[y]-10+'A';
        }
        f[k]='\0';
        printf("%s",f);
        
    }
        getchar();
        getchar();
        getchar();
}


