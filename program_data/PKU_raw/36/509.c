int max(char a,char b[][50],int l);
int main()
{int l,i;
    char a[50],b[2][50]={'\0'};
    scanf("%s%s",a,b[0]);
    l=strlen(a);
    if(l!=strlen(b[0]))
    printf("NO");
    else
    {
        for(i=0;i<=l-1;i++)
        if(max(a[i],b,l)==0)
        break;
        
        if(i==l)
        printf("YES");
        else
        printf("NO");
}
    return 0;
}

int max(char a,char b[][50],int l)
{int i;
     for(i=0;i<=l-1;i++)
     if(a==b[0][i]&&b[1][i]=='\0')
     {b[1][i]=1;
     return 1;
     break;}
     return 0;
     }
