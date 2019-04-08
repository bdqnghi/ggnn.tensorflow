
int main()
{
    /* 50 seem to short,
     * when the input > 50 chars, your program will exit abnormaly,
     * result a no output. This is error tips you get on web.
     */
    //char s[50]={0};
    char s[1000] = {0};

    gets(s);
    int n,m,b=1,i,j,k=0;
    n=strlen(s);
    char a[50][50]={0};
    for(i=0;k<n;i++){ /* word i++ */
        for(j=0;b=0 || k<n;j++){ /* word[i] j++ */
            m=i;
            k++;
            if(s[k-1]==' ')
            {b=0;}
            if(b!=0){
                a[i][j]=s[k-1];
            }
            else
                break;
        }
    }
    int c=0,d=0;
    /* small change: m-1 -> m. */
    for(i=0;i<m;i++)
    {
        /*
         * Get the max & min length.
         */
        if(strlen(a[c])<strlen(a[i+1]))
            c=i+1;
        if(strlen(a[d])>strlen(a[i+1]))
            d=i+1;
    }
    printf("%s\n%s\n",a[c],a[d]);
    return 0;
}