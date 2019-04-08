int main ()
{
    int sz1[200],sz2[200];
    int n;
    int i,s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&(sz1[i]),&(sz2[i]));
    }
    for(i=0;i<n;i++)
    {
        if((sz1[i]==0&&sz2[i]==1)||(sz1[i]==1&&sz2[i]==2)||(sz1[i]==2&&sz2[i]==0))
        {
            s1+=1;
        }
        if((sz1[i]==1&&sz2[i]==0)||(sz1[i]==2&&sz2[i]==1)||(sz1[i]==0&&sz2[i]==2))
        {
            s2+=1;
        }
    }
    if(s1>s2)
    {
        printf("A");
        
    }
    if(s1<s2)
    {
        printf("B");
    }
    if(s1==s2)
    {
        printf("Tie");
    }
    return 0;
}
