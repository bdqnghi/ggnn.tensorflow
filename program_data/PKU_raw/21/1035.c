int main()
{
    double s[310],av=0,n=0,max=0,sum=0,p[310],temp=0;//s???????????av?????p???????????????max???????? n?????? 
    int i=0,j=0,ge=1;
       cin>>n;
       for(i=1;i<=n;i++)//?? 
       {
          cin>>s[i];                 
       }
       for(i=1;i<=n;i++)
       {
          sum+=s[i];                 
       }
       av=sum/n;
       for(i=1;i<=n;i++)
       {
          if((s[i]>av)&&(s[i]-av>max))
            {max=s[i]-av;continue;}
          if((av>s[i])&&(av-s[i]>max)) 
            {max=av-s[i];continue;}                
       }
       ge=1;
       for(i=1;i<=n;i++)
       {
          if(abs(abs(s[i]-av)-max)<0.00001)
            {p[ge]=s[i];ge++;continue;}               
       }
       ge--;
       for(i=1;i<=ge;i++)
       {
          for(j=1;j<=ge-i;j++)
          {
                if(p[j]>p[j+1])
                    {
                       temp=p[j];
                       p[j]=p[j+1];
                       p[j+1]=temp;           
                    }            
          }                 
       }
       cout<<p[1];
       for(i=2;i<=ge;i++)
         cout<<","<<p[i];
return 0;    
}