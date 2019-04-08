int main()
{
   char a[110];
   int i=0,j,k,l,t1,t2;
   for(;;)
   {
        a[i]=getchar();
        if(a[i]=='\n') break;
        i++;
    }
    l=i-1;
    for(i=0;i<=l;i++)
    {
        if(a[i]!=a[0])
        {
            a[i]=0;
            for(j=i;j>=0;j--)
            {
                if(a[j]==a[0])
                {a[j]=0;
                cout<<j<<" ";
                break;}
            }
            cout<<i<<endl;
        }
    }
        return 0;
}