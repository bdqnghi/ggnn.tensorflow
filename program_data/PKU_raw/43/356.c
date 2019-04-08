int main()
{
int m,n,i,t,a;      //m??;n?m???;i,t=??=??,i<t;a?????
cin>>m;
if(m%2!=0)              
cout<<"input error";
else
  {n=m/2;
   for(i=3,t=m-i;i<=n;i++,t--)
     {for(a=2;a<i;a++)
       {if(i%a!=0);
        else 
          break;    
        }
       if(a==i)
         {
          for(a=2;a<t;a++)
            {if(t%a!=0);
             else 
               break;
             } 
          if(a==t)
             cout<<i<<' '<<t<<'\n';
          else;
          }
        else;
      }
    }
cin.get();cin.get();
return 0;
}