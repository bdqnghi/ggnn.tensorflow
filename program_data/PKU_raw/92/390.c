void h(int x[],int y)
{   int i,j,t;
  for(i=1;i<y;i++)
     for(j=y;j>i;j--)
     if(x[j]>x[j-1])
   {     t=x[j-1];
         x[j-1]=x[j];
         x[j]=t;     }
   }
   
   void g(int x[],int y)
{   int i,j,t;
     for(i=1;i<y;i++)
     for(j=y;j>i;j--)
     if(x[j]<x[j-1])
   {     t=x[j-1];
         x[j-1]=x[j];
         x[j]=t;     }
 }

void c(int b[],int m,int n)  
{     int i; 
      for(i=n;i<=m;i++)
           b[i]=b[i+1];
           }
int duma(int n,int a1[2000],int a2[2000]);
int main()
{
    int n=1,a1[2000],a2[2000];
    for(int k=1;n!=0;k++) 
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
				if(k==1)
                printf("%d",duma(n,a1,a2));
				else
                printf("\n%d",duma(n,a1,a2));
        } 
    }
    return 0; 
} 

int duma(int n,int a1[2000],int a2[2000])
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
