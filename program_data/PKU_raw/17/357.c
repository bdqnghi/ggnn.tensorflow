

int dg(int a,int b);

char st[1000],st2[1000];

int main()
{
    while (cin.getline(st,1000))
    {

          st2[strlen(st)]='\0';
          dg(1,0);
          cout<<st<<endl<<st2<<endl;
    }

}
int dg(int a,int b) //a?????????????b?????????????????0??????????????????????0
{
    for (int i=a;i<=strlen(st);i++)
    {
     //   cout<<b<<endl;
      //  cout<<b<<' '<<i<<' '<<st2<<endl;
        if (st[i-1]=='(')
        {
          //  cout<<'A'<<endl;
           int t=dg(i+1,i);
           if (t==0) {st2[i-1]='$'; break;}
           if (t>0) {st2[i-1]=' '; i=t; continue;}
        }
        else if (st[i-1]==')')
        {

             if (b==0) st2[i-1]='?';
             if (b>0) {st2[i-1]=' '; return i;}
        }
        else st2[i-1]=' ';
    }
    return 0;
}
