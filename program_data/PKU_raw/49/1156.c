int main()
{
    char a[100000],b[1000];
    int l,i,j,t,p,q;
    scanf("%s",&a);
    l=strlen(a);
    for(i=1;i<l-1;i++)
    {
        for(j=0;j<l;j++)
        {
            t=j+i;
            p=j;
            do{
                    if(a[p]==a[t])
                     {
                           t=t-1;
                           p=p+1;
                     }
                     else
                     {
                         break;
                     }
            }while(t>p);
            if(t<=p)
            {
                for(q=j;q<(j+i);q++)
                {
                    printf("%c",a[q]);
                }
                 printf("%c\n",a[j+i]);
            }
        }
    }
    return 0;
}
