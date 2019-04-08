int main()
{
    char a[250],b[250],c[250];
    int aa[250],bb[250],cc[250],dd[250],add;
    scanf("%s",a);
    scanf("%s",b);

    int l1,l2,i,j;
    l1=strlen(a);
    l2=strlen(b);

    if (l1>=l2)
    {
        for(i=0;i<l1-l2;i++)
            c[i]='0';
        for(j=i;j<l1;j++) c[j]=b[j-l1+l2];

        for(i=0;i<l1;i++) aa[i]=a[i]-48;
        for(i=0;i<l1;i++) cc[i]=c[i]-48;
        add=0;
        for(j=l1-1;j>=1;j--)
            if((cc[j]+aa[j]+add)<=9)
            {
                dd[j]=cc[j]+aa[j]+add;
                add=0;
            }
            else
            {
                dd[j]=cc[j]+aa[j]+add-10;
                add=1;
            }

        j=0;
        if(cc[j]+aa[j]+add<=9)
        {
            dd[j]=cc[j]+aa[j]+add;
            for(i=0;i<l1;i++) if (dd[i]!=0) break;
            if (i==l1) printf("%d",0);
            else
            for(j=i;j<=l1-1;j++)
            printf("%d",dd[j]);
        }
        else
        {
            dd[j]=cc[j]+aa[j]+add-10;
            printf("%d",1);
            for(j=0;j<=l1-1;j++)
            printf("%d",dd[j]);
        }


    }
    else
    {
        for(i=0;i<l2-l1;i++)
            c[i]='0';
        for(j=i;j<l2;j++) c[j]=a[j-l2+l1];

        for(i=0;i<l2;i++) aa[i]=b[i]-48;
        for(i=0;i<l2;i++) cc[i]=c[i]-48;
        add=0;
        for(j=l2-1;j>=1;j--)



            if((cc[j]+aa[j]+add)<=9)
            {
                dd[j]=cc[j]+aa[j]+add;
                add=0;
            }
            else
            {
                dd[j]=cc[j]+aa[j]+add-10;
                add=1;
            }
        j=0;
        if(cc[j]+aa[j]+add<=9)
        {
            dd[j]=cc[j]+aa[j]+add;
            for(i=0;i<l2;i++) if (dd[i]!=0) break;
            if (i==l1) printf("%d",0);
            else
            for(j=i;j<=l2-1;j++)
            printf("%d",dd[j]);
        }
        else
        {
            dd[j]=cc[j]+aa[j]+add-10;
            printf("%d",1);
            for(j=0;j<=l2-1;j++)
            printf("%d",dd[j]);
        }
    }
}