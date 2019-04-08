int main()
{
    int t; char a[100009];
    int i,j,k,len,temp=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
                     cin>>a;
                     len=strlen(a);
                     temp=0;
                     for(j=0;j<=len-1;j++)
                     {
                                          for(k=0;k<len;k++)
                                          {
                                                            if(a[j]==a[k] & j!=k)
                                                            break;
                                                            if(k==len-1)
                                                            {cout<<a[j]<<endl;temp=1;}
                                          }
                                          if(temp) break;
                                          if(j==len-1 & temp==0) cout<<"no"<<endl;
                     }
                                                          
                     
    }
    
    
    
 
 return 0;
    
}