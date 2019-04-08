int main()
{
    int i,n,j,k,p,b[100];
    char m[100],l[1];
    cin>>n;
    cin.getline(l,1);
    int han(char m[]);
    for(k=0;k<n;k++)
    {
        cin.getline(m,100);
        b[k]=han(m);
       //cout<<han(m)<<endl;
    }
    for(k=0;k<n;k++) cout<<b[k]<<endl;

    return 0;
}
int han(char m[])
{
   int i,p=1;

    if((m[0]>=65&&m[0]<=97)||(m[0]>=97&&m[0]<=122)||m[0]==95)
        {
            for(i=1;i<strlen(m);i++)
            if((m[i]>=65&&m[i]<=97)||(m[i]>=97&&m[i]<=122)||m[i]==95||(m[i]>=48&&m[i]<=57))
             p++;
        }
        if(p==strlen(m)) return 1;
        else return 0;
}
