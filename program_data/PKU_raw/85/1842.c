int main ()
{
    int n,l,i,j,b;
    char a[100][20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s\n",a[i]);
    for(i=0;i<n;i++)
    {
        b=0;
        l=strlen(a[i]);
        j=0;
        if((a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]=='_')){b++;}
        for(j=1;a[i][j]!='\0';j++)
        {
            if((a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='0'&&a[i][j]<='9')||(a[i][j]=='_'))
            {b++;}
        }
        if(b==l){printf("yes\n");}
        else {printf("no\n");}
    }
    return 0;
}
