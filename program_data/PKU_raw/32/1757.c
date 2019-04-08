void main()
{
        int n, result[100];
        char a[100], b[100], c[2];
        scanf("%d", &n);
        int i,s,t,j,k;
        for(i=0;i<n;i++)
        {
                gets(c);
                gets(a);
                gets(b);
                s=strlen(a);
                t=strlen(b);
                for (j=s-1; ;j--)
                {
                        if (a[j]>=b[j-s+t])
                                result[j] = a[j]-b[j-s+t];
                        else
                        {
                                result[j] = a[j]-b[j-s+t]+10;
                                a[j-1]--;
                        }
                        if (j-s+t==0)
                                break;
                }
                for(k=0; k<j; k++)
                        result[k]=a[k]-'0';
                if(j>0)
                {
                        for(k=0;k<s;k++)
                                printf("%d",result[k]);
                        printf("\n");
                }
                else
                {
                        for(k=0;k<s;k++)
                                if (result[k]!=0)
                                        break;
                        for(j=k;j<s;j++)
                                printf("%d",result[k]);
                        printf("\n");
                }
        }
}