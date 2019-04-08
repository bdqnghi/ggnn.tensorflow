
int main()
{
    char c[101],d[101],e[101],f[101];
    int a,b,h,n,i,j,m,o;

    int tmp;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s\n%s",&c,&d);
        a=strlen(d);
        b=strlen(c);
        for(o=0;o<a;o++) f[o]=d[a-o-1];        
        for(j=0;j<b;j++) e[j]=c[b-j-1];
        for(m = 0; m < a; m++)
        {
            if(e[m]<f[m]) 
            {
                e[m]=e[m]+10 - f[m] + '0';
                tmp = m;
                while(e[++tmp] < '1') 
                    e[tmp] = '9';
                e[tmp]--;
            }
            else  e[m]=e[m]-f[m] + '0';
        }
        for(h = b-1; h > 0; h--) {
            if (e[h] != '0') {
                break;
            }
        }
        for(; h >= 0; h--) 
            printf("%d",e[h] - '0');

        printf("\n");
    } 
    return 0;
}