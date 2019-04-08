int main()
{
    int l,i,t[100],k;      //???????????????.
    char st[150];
    gets(st);
    l=strlen(st);
    k=1;
    t[0]=-1;
    for (i=0;i<l;i++)
    {
        if (st[i]==' ') 
        {
            t[k]=i;      //?????????
            k++;
        }
    }
    t[k]=l;
    for (i=k;i>0;i--) 
    {
        for(int j=t[i-1]+1;j<=t[i]-1;j++) cout<<st[j];
        if (i!=1) cout<<" ";     //?????????,????????????
    }
    cout<<endl;
    return 0;
}

