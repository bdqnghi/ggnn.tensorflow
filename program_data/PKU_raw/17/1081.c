main()
{
    char a[101],b[101],c[101];
    while(gets(a)!=NULL)
    {int i=0,j=0,k=0;int n;
        n=strlen(a);
        for(i=0;i<n;i++)
        {b[i]=' ';
            c[i]=' ';}
            
            
        for(i=n-1;i>=0;i--)
            if(a[i]=='(')
                b[i]=a[i];
        for(i=0;i<n;i++)
            if(a[i]==')')
                c[i]=a[i];
        for(i=n-1;i>=0;i--)
            if(b[i]=='(')
            {for(j=i+1;j<n;j++)
                if(c[j]==')')
                {c[j]=' ';
                 b[i]=' ';
                    break;}}
        printf("%s\n",a);
        for(i=0;i<n;i++)
        {if(b[i]!=' ')
               a[i]='$';
             if(c[i]!=' ')
                 a[i]='?';
            if(b[i]==' '&&c[i]==' ')
                a[i]=' ';
        }
        printf("%s\n",a);
    }
    
     
    
    
    
    
    }
