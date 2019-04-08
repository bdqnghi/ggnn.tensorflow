int a[6];
char b[5]={' ','z','q','s','l'};
int main()
{
   int i,j;
  
  for(a[1]=1;a[1]<=5;a[1]++)
      for(a[2]=1;a[2]<=5;a[2]++)
         for(a[3]=1;a[3]<=5;a[3]++)
            for(a[4]=1;a[4]<=5;a[4]++)
        if(a[1]!=a[2]&&a[1]!=a[3]&&a[1]!=a[4])
           if(a[2]!=a[3]&&a[2]!=a[4]&&a[3]!=a[4])
             if(a[1]+a[2]==a[3]+a[4])
               if(a[1]+a[4]>a[2]+a[3])
                  if(a[1]+a[3]<a[2])
                    {
                       for(i=1;i<=4;i++)
                          for(j=1;j<=4;j++)
                             if(a[i]>a[j])
                              {
                                a[i]=a[i]+a[j];
                                a[j]=a[i]-a[j];
                                a[i]=a[i]-a[j];  
                                b[i]=b[i]+b[j];
                                b[j]=b[i]-b[j];
                                b[i]=b[i]-b[j];  
                               }
                      for(i=1;i<=4;i++)
                        printf("%c %d\n",b[i],a[i]*10);
                        return 0;
                     }
return 0;
}