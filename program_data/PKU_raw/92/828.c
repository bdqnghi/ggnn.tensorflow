int f(int n,int t[2000],int q[2000])
{
    int m=0,i=0; 
    for(i=n;i!=1;i--) 
    {
           if(t[0]>q[0])               
           {
               m=m+200;
               for(int k=0;k<i-1;k++) 
               {
                       t[k]=t[k+1];
                       q[k]=q[k+1];
               }
           }
           else
           { 
              if (t[0]<q[0])              
              {
                     m=m-200;
                 for(int k=0;k<i-1;k++) 
                 {
                       q[k]=q[k+1];
                 } 
              } 
              else
              {
                  if(t[i-1]>q[i-1])           
                  {
                         m=m+200;
                  }
                  else                                              
                 {

                   if(t[i-1]<q[0])
                         m=m-200;
					  else
						  m=m;
                         for(int k=0;k<i-1;k++)     
                         {
                              q[k]=q[k+1];
                         }

                  } 
               }
              } 
          
    }
    if (t[0]<q[0])                 
    {
        m=m-200; 
    }
    else 
    {
         if (t[0]>q[0])
         {
               m=m+200; 
         }
         else
         m=m; 
    }
    return m;
}
int main()
{
    int n=2,t[2000],q[2000];
    for(int k=0;n!=0;k++) 
    {
        scanf("%d",&n);
        if(n!=0)
		{
                for(int i=0;i<n;i++)
				{
                        scanf("%d",&t[i]);
                }
                for(int i=0;i<n;i++) 
				{
                        scanf("%d",&q[i]);
                }

                for(int i=0;i<n;i++)                       
                {
                         for(int j=0;j<n-i-1;j++)
                         {
                             if(t[j]<t[j+1])
                             {
                                     int s;
                                         s=t[j];
                                      t[j]=t[j+1];
                                     t[j+1]=s;
                             }
                         }
                 }
                for(int i=0;i<n;i++)                         
                {
                         for(int j=0;j<n-i-1;j++)
                         {
                             if(q[j]<q[j+1])
                             {
                                     int s;
                                         s=q[j];
                                      q[j]=q[j+1];
                                     q[j+1]=s;
                             }
                         }
                 }
				if(k==0)
                printf("%d",f(n,t,q));
				else
                printf("\n%d",f(n,t,q));
        } 
    }
    getchar();
    getchar();
} 
