int s[10000];
int main()
{
    int a,b,c,d,e,f,i,k=0;
    for(i=0;i>=0;i++)
    {
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
        break;
        else
        s[i]=(59-b)*60+60-c+(11-a)*3600+d*3600+e*60+f;
        k++;
       }
     for(i=0;i<k;i++)
        printf("%d\n",s[i]);
        return 0;
}