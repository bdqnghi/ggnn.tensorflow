int main(int argc, char *argv[])
{
    long int n,k,m,i,j,tf;
    scanf("%ld %ld",&n,&k);
    for(j=1;j<2147483647;j++)
    {tf=1;
     m=j*n+k;
     for(i=2;i<=n;i++)
     {
        if(m%(n-1)!=0){tf=0;break;}
        m=m*n/(n-1)+k;
        }
     if(tf==0)continue;
     break;
     }
    printf("%d\n",m);
    return 0;
}