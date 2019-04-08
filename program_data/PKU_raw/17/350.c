int main()
{
   for(int p=0;p<15;p++)
   {char c[110];
   void f(char c[110]);
   cin.getline(c,110,'\n');
   cout<<c<<endl;
   int i,j,k,l;
   l=strlen(c);
   for(i=0;i<l;i++)
   {
        if(c[i]!='('&&c[i]!=')') c[i]=' ';    
    }
    f(c);
    for(i=0;i<l;i++)
    {
        if(c[i]==')') c[i]='?';
    }
    cout<<c<<endl;}
    
    return 0;
}
void f(char c[110])
{
    int i,j,k,l;
    l=strlen(c);
    for(i=(l-1);i>=0;i--)
    {
        if(c[i]=='(')
        {
            for(j=(i+1);j<l;j++)
            {
                if(c[j]==')')
                {
                    c[j]=' ';
                    c[i]=' ';
                    k=1;
                    break;
                }
                k=0;
            }
            if(k==0) c[i]='$';
            f(c);
        }
    }
}
        
                
    
