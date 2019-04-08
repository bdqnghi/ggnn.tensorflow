int main()
{
    long int i,j,k,n,m;
    char c;
    c=',';
    m=-99990; n=-88880;
    while (c==',')
    {
          scanf("%d",&i);
          if (i>m)
          {
             n=m; m=i;
          }
          else if ((i>n)&&(i<m))  n=i;
          c=getchar();
    }
    if ((n!=-88880)&&(n!=-99990)) printf("%d",n);
    else printf("No");
}
