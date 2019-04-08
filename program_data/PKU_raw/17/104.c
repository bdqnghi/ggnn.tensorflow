int main()
{
    char a[101]={0};
    char b[101];
    int i,j,k;
    int l,r;
    int len;
    while(cin>>a)
    {
                 l=0;r=0;
                 for(i=0;i<101;i++)
                 {
                                   if(a[i]==0)
                                   {
                                                len=i;
                                                break;
                                   }
                 }
                 for(i=0;i<len;i++)
                 {
                                   b[i]=' ';
                 }
                 b[len]=0;
                 for(i=0;i<len;i++)
                 {
                                   if(a[i]=='(')
                                   l++;
                                   if(a[i]==')')
                                   l--;
                                   if(l<0)
                                   {b[i]='?';l=0;}
                                   }
                 for(i=0;i<len;i++)
                 {
                                   if(a[len-i-1]==')')
                                   r++;
                                   if(a[len-i-1]=='(')
                                   r--;
                                   if(r<0)
                                   {b[len-i-1]='$';r=0;}
                                   }
                 cout<<a<<endl<<b<<endl;
                 for(i=0;i<101;i++)
                 {a[i]=0;}
    }
    return 0;
}