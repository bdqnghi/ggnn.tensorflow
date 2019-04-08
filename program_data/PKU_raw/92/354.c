int duma(int n,int a1[1000],int a2[1000]);
int main()
{
    int n=1,a1[1000],a2[1000];
    for(;n!=0;) 
    {
        scanf("%d",&n);
        if(n!=0)
		{
                for(int i=0;i<n;i++)
				{scanf("%d",&a1[i]);}
                for(int i=0;i<n;i++) 
				{scanf("%d",&a2[i]);}

                for(int i=0;i<n;i++)                       //??????
                {
                         for(int j=0;j<n-i-1;j++)
                         {
                             if(a1[j]<a1[j+1])
                             {
                                     int temp;
                                         temp=a1[j];
                                      a1[j]=a1[j+1];
                                     a1[j+1]=temp;
                             }
                         }
                 }
                for(int i=0;i<n;i++)                         //??????
                {
                         for(int j=0;j<n-i-1;j++)
                         {
                             if(a2[j]<a2[j+1])
                             {
                                     int temp;
                                         temp=a2[j];
                                      a2[j]=a2[j+1];
                                     a2[j+1]=temp;
                             }
                         }
                 }
				//if(k==1)
               // printf("%d",duma(n,a1,a2));
			//	else
                printf("%d\n",duma(n,a1,a2));
        } 
    }
    return 0; 
} 

int duma(int n,int a1[1000],int a2[1000])
{
    int a=0,i=0; 
    for(i=n;i!=1;i--) 
    {
           if(a1[0]>a2[0])               //?????????????????
           {
               a+=200;
               for(int k=0;k<i-1;k++) 
               {
                       a1[k]=a1[k+1];
                       a2[k]=a2[k+1];
               }
           }
           else
           { 
              if (a1[0]<a2[0])              //?????????????????
              {
                     a-=200;
                 for(int k=0;k<i-1;k++) 
                 {
                       a2[k]=a2[k+1];
                 } 
              } 
              else
              {
                  if(a1[i-1]>a2[i-1])           //?????????????????
                  {
                         a+=200;
                  }
                  else                            //?????????????????
                  {
					  if(a1[i-1]<a2[0])
                         a-=200;
					  else
						  a=a;
                         for(int k=0;k<i-1;k++)     
                         {
                              a2[k]=a2[k+1];
                         }

                  } 
               }
              } 
          
    }
    if (a1[0]<a2[0])                 //????????
    {
        a-=200; 
    }
    else 
    {
         if (a1[0]>a2[0])
         {
               a+=200; 
         }
         else
         a=a; 
    }
    return a;
}
