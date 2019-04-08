int main()
{
   int i=0,j=0,k=-1,m=0,n=0;
   int a[60000];
   int b[60000];
   int sum[60000]={0};
   int num[60000]={0};
   scanf("%d",&n);
   while(1)
   {     
         scanf("%d %d",&a[i],&b[i]);  
        if(a[i]==0&&b[i]==0)
             break;
        else
        {
            for(j=0;j<n;j++)
             {
               if (a[i]==j)
			   {
                          num[j]=-1;
                           break;
			   }
             }
             
            for(j=0;j<n;j++)
            {
                if (b[i]==j) 
				{ 
                                    sum[j]++;
                                     break;
				}
            }
   
        }   
        i++;
   }     
  for(i=0;i<n;i++)
  {
  if(num[i]!=-1)
  {
 if(sum[i]==n-1)
  {
printf("%d",i);
  m=1;
}
  }
  } 
  
  if(m!=1)
  printf("NOT FOUND");   
}
