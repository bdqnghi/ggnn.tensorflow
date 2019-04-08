int main()
{
    char a[110]={0};
    int i,j,p=0;
    int b[110]={0};
    cin.get(a,110,'\n');
    for(i=0;i<=109;i++)
    {
                       if(a[i]>0)
                       p++;
    }
    for(i=1;i<=p-1;i++)
    {
                     if(a[i]==a[0]) continue;
                     else 
                     {
                          j=i-1;
                          while(j>=0)
                          {
                                     if(b[j]==0) break;
                                     else 
                                     j--;
                          }        
                          cout<<j<<" "<<i<<endl;
                          b[j]=1,b[i]=1;
                     }
    }
    return 0;
}
 