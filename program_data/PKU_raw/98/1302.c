int main()
{
    char a[500][45];
    int n,i,q=0;
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
                       cin>>*(a+i);
    
    }
    for(i=0;i<=n-1;i++)
    {
                       if(q+strlen(*(a+i))+strlen(*(a+i+1))+1>80)
                       {cout<<*(a+i)<<endl;
                       q=0;
                       }
                       else if(i==n-1) 
                       {cout<<*(a+i);
                       q=q+strlen(*(a+i))+1;
                       }
                       else{cout<<*(a+i)<<" ";
                       q=q+strlen(*(a+i))+1;
                       }
                            
    }
    return 0;
}