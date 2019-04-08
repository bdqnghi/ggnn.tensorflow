
int seven(int x);

int main()
{
    float a[11][100],p=0,gpa;
    int q,n,i,j=0;
    long m=0  ;
    scanf("%d",&n)  ;
    for(q=1;q<=n;q++)
    {
        if((q%7!=0)&&(seven(q)==0))
        {
            m+=q*q;

        }

    }
    printf("%ld",m);


    return 0;
}

int seven(int x)
{
    int i;
    for(i=1;i>=0;i--)
    {
        if(x/(int)(pow(10,i))==7)
        {
            return 1;
        }
        else
        {
        x-=  x/(int)(pow(10,i))*pow(10,i)          ;
        }

    }
    return 0;
}