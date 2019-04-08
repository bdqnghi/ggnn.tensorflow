int main()
{
    char a[500];
    int c,i,j,u,p;
    cin>>a;
     for( j=2;j<500;j++)
      { c=j/2;
       
       for( i=0;i<499;i++)
    {  if(a[i]=='\0') break;
       for( u=0;u<c;u++)
       { if(a[i+u]!=a[i+j-1-u]) break;
        if(u==c-1)
         if(a[i+c-1]==a[i+j-c])
        for(p=i;p<i+j;p++)
          {cout<<a[p];
           if(p==i+j-1)
           cout<<endl;}}}}
  
  return 0;
}
     