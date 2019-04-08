int main()
{
    char a[100],b[100];
    int n,k=1,p,q,i,c[100];
    scanf("%d",&n);
    while (k<=n)
    {
        scanf("%s%s",&a,&b);
        p=strlen(a);//??????
        q=strlen(b);//??????
        i=p;
        for(;p>=0;p--,q--)
        {
            if (q>=0)
            {
                c[p]=a[p]-b[q];
                if (c[p]<0) {c[p]=10+c[p];a[p-1]=a[p-1]-1;}
            }
            else if (q<0) c[p]=a[p]-48;
        }
        for(p=0;p<i;p++) printf("%d",c[p]);
        k++;
        printf("\n");
    }
}

