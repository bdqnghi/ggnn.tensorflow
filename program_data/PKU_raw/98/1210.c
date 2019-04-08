int main()
{
    int n,i=0,t=0;
    char c[4000]={'\0'};
    cin>>n;
    getchar();          //??
    while (i<=n)
    {
        c[t]=getchar();
        if(c[t]==' ')
            i++;
        if(c[t]=='\n')
        {
            break;
            c[t]='\0';
        }
        t++;
    }
    char *p=&c[0]+80;       //??80???????
    int m=0;
    while(1)
    {
        while (*p!=' ')
        {
            p--;
        }                      //??????
        for(i=m;&c[i]!=p;i++)
        {
            cout<<c[i];
        }
        cout<<endl;
        if(c[i+81]!='\0')
        {
            p=&c[i+1]+80;
            m=i+1;
        }
        else
        {
            i++;
            for(;c[i]!='\0';i++)
            {
                cout<<c[i];
            }
            break;
        }
    }
    return 0;
}
