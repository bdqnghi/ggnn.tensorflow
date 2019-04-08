 
void main()
{
    int i,m,n,s;
    for (s=1;s<100;s++)
{
    scanf("%d%d",&m,&n);
    if (m==0&&n==0) break;
    int a[1000];
    for(i=0;i<m;i++)
    {
        a[i]=1;
    }
    int index=0;//????
    int loc;//????
    int t=0;
    int p=m;//?????
    while(p>0)
    {
        if(a[index]==1)
        {   
            ++t;
            if(t%n==0)
            {
                a[index]=0;
                loc=index;
                p--;
            }
 
        }
        if(index < m-1)
            index++;
        else
            index=0;
    }
    printf("%d\n",loc+1);
}}