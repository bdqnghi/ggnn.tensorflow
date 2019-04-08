
void rev(char *x);
int val(char a);

int main()
{
    char a[260],b[260],sum[260];
    int i,tmp=0,sign=0;
    for (i=0;i<260;i++)
    {
        a[i]=0;
    }    
    for (i=0;i<260;i++)
    {
        b[i]=0;
    }    
    for (i=0;i<260;i++)
    {
        sum[i]=0;
    }    
    gets(a);
    gets(b);
    rev(a);
    rev(b);
    for (i=0;i<=strlen(a) || i<=strlen (b);i++)
    {
        sum[i]=val(a[i])+val(b[i])+tmp+'0';
        if (sum[i]>'9')
        {
            sum[i]=sum[i]-10;
            tmp=1;
        }    
        else tmp=0;
    }    
    for (i=strlen(sum)-1;i>=0;i--)
    {
        if (i==0) sign=1;
        if (sum[i]!='0' || sign==1)
        {
            printf("%c",sum[i]);
            sign=1;
        }     
    }    
    return 0;
}   

void rev(char *x)
{
    int i,tmp,l;
    l=strlen(x);
    for (i=0;i<=l/2-1;i++)
    {
        tmp=x[i];
        x[i]=x[l-i-1];
        x[l-i-1]=tmp;
    }   
}     

int val(char a)
{
    if (a>'0' && a<='9') return a-48;
    else return 0;
}    

