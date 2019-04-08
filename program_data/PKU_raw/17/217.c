struct m
{
 char a;
  int n;}q[100];
int main()
{
    char b[101]={0};
    int i,j,k,t,l;
    while(cin>>b)
    {cout<<b<<endl;
     char c[101]={0};
    t=0;
    k=strlen(b);
    j=0;
    for(i=0;i<k;i++)
    if(b[i]=='('||b[i]==')')
     {q[j].a=b[i];
      q[j++].n=i;}
    i=0;
    while(i<j-t-1)
     {if(q[i].a=='('&&q[i+1].a==')')
       {
       for(l=i;l<j-t-2;l++)
         {q[l]=q[l+2];}
         t=t+2;
         if(i!=0)i=i-1;}
     else i++;}
     
     for(i=0;i<k;i++)
      {c[i]=' ';b[i]=0;}
     for(i=0;i<j-t;i++) 
        {if(q[i].a=='(')
          c[q[i].n]='$';
         else c[q[i].n]='?';} 
     cout<<c<<endl;       }
     return 0;}
