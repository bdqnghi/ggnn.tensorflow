main()
{
 int m=0,n,i,j,t=0;
 int num[100];
 int a[100];
 char string[11];
 char stm[100][11];
 char str[100][11];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%s",stm[i]);
  scanf("%d",&num[i]);
  }
  j=0;
  for(i=0;i<n;i++)
  {
   if(num[i]>=60)
   {
    a[j]=num[i];
    strncpy(str[j],stm[i],10);
    j++;
    t=j-1;
               }               
                  }               
    for(j=0;j<t;j++)
    {
      for(i=0;i<t-j;i++)
      {
        if(a[i]<a[i+1])
        {
          m=a[i];
           a[i]=a[i+1];
           a[i+1]=m;
           strncpy(string,str[i],10);
           strncpy(str[i],str[i+1],10);
           strncpy(str[i+1],string,10);
           }                
        }              
    }              
    for(i=0;i<=t;i++)
      printf("%s\n",str[i]);              
    for(i=0;i<n;i++)
    {
    if(num[i]<60)
    printf("%s\n",stm[i]);
    } 
    getchar();
    getchar();
      }
