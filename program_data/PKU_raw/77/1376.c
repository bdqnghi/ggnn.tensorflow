

int dg(int l);

char a,st[1000];

int main()
{
    cin>>st; a=st[0]; 
    int h=0,z[100];
    for (int i=1;i<=strlen(st);i++)
    {
        if (st[i-1]==a) {h++; z[h]=i;}
           else {cout<<z[h]-1<<' '<<i-1<<endl; z[h]=0; h--;}
    }

    return 0;
}
