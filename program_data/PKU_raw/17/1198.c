main()
{
    char c[101];
    int h,i,j,k,n,a[101],b[101];
    while((gets(c))!='\0')
    {
        j=0;k=0;
        puts(c);
        n=strlen(c);
        for(i=0;i<n;i++)
        {
            if((c[i]!='(')&&(c[i]!=')')) c[i]=' ';
            else if(c[i]=='(') {j++;a[j]=i;}
            else {k++;b[k]=i;}
        }
        for(h=1;h<=k;h++)
        {
            for(i=j;i>=1;i--)
            {
                if(a[i]<b[h]) {c[b[h]]=' ';c[a[i]]=' ';b[h]=-1;a[i]=101;break;}
            }
        }
        for(i=1;i<=j;i++)
        {
            if(a[i]!=101) c[a[i]]='$';
        }
        for(h=1;h<=k;h++)
        {
            if(b[h]!=-1) c[b[h]]='?';
        }
        puts(c);
    }
    return 0;
}