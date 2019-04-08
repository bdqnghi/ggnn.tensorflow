int main()
{
    int n,i=1,j,sum=0,t=10;
    cin>>n;
    for(i=1;i<=n;i++)
    {if(i%7==0)
         ;
     else
	     {if(i%10==7)
             ;
          else
             {j=i/t;
	         if(j%10==7)
                 ;
             else
                 sum=sum+i*i;
              }
	      }
    }
    cout<<sum<<endl;
    return 0;
}
