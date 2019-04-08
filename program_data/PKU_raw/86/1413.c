
int main()
{
    int n,m,s,p,i,j,c;
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        s=0; 
        scanf("%d",&m);
        for(i=0;i<=m;i++)
        {
            if(m==0) p=60;
            else if(i==0&&m!=0) continue;
            if(i>0) scanf("%d",&p); 
            if(3*(i-1)+s<60&&i<m)
            {
                if(3*(i-1)+p<=60) s=p;
                else s=60-3*(i-1);
            }
            else
            {
                if(3*(i-1)+p<=60&&i==m)
                {
                    if(3*i+p<=60)s=60-3*i;
                    else s=60-3*(i-1)-(3-(3*i+p-60));
                }
                else
                if(3*(i-1)+p>60&&i==m)
                {
                    if(3*i+s<=60)s=60-3*(i-1);
                    else s=60-3*(i-1)-(3-(3*i+s-60));
                } 
            } 
        }
        printf("%d",s);
        if(c<n) printf("\n"); 
    }

    return 0;
}