int d=0,c=0,m=0;
char a[100],b,g;
void handshake(int x)
{
    if(x==c)
    {
       cout<<x-1<<' '<<x<<endl;
       a[x-1]=' ';a[x]=' ';
    }
    if(x>c&&a[x]==b)
    {
        handshake(x-1);
    }
    if(x>c&&a[x]==g)
    { 
           
            handshake(x-1);
            for( m=x-1;m>=0;m--)
            {
               if(a[m]==b)
               {
               cout<<m<<' '<<x<<endl;
               a[m]=' ';
               a[x]=' ';
               break;
               }
            }
     }
}
int main()
{  
    int i=0,j=0;
    cin>>a;
     b=a[0];
    for(i=0;i<100;i++)
    {
        if(a[i]!=a[0])
       {
         g=a[i];
        break;
        }
    
    }
    for(i=0;i<100;i++)
    {
       if(a[i]==b||a[i]==g)
       d++;
    }
    for(i=0;i<d;i++)
    {
      if(a[i]==g)
      {  
         c=i;
         break;
      }
    }   
    
    handshake(d-1);
       return 0;
}
