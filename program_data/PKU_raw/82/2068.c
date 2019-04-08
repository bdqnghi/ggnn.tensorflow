int main()
{
    int n,p[N],q[N],i,j,s,x,y;
    x=0;y=0;s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d%d",&p[i],&q[i]);}
    for(i=0;i<n;i++)
        {
            if(p[i]>=90&&p[i]<=140&&q[i]>=60&&q[i]<=90)
                {x=x+1;if(x>s){s=x;}}
            else
                {x=0;}
        }
    printf("%d",s);
    return 0;
}
