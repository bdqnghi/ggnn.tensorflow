
int main()
{
  int n;
  char a[500];
  scanf("%d\n",&n);
  gets(a);
  int chang=strlen(a);
  int i,j,k;
  int num[500];
  for (i=0;i<chang;i++)
  {num[i]=1;}
  if (n==2)
  {
  for (i=0;i<chang-n+1;i++)
  {
      for (j=i+1;j<chang-n+2;j++)
      {
          if (a[j]==a[i])
          {
                if (a[j+1]==a[i+1])
                    num[i]=num[i]+1;         
          }
      }  
  }
      int max=0;
      for (j=0;j<chang-n+1;j++)
      {
          if (num[j]>max)
            max=num[j];
            else 
            ;
      }
      
      if (max==1)
      printf("NO");
      else
      {
          printf("%d\n",max);
          for (i=0;i<chang-n+1;i++)
       {
          if (num[i]==max)
          printf("%c%c\n",a[i],a[i+1]);
       }
      }
  }
  else if (n==3)
  {
       for (i=0;i<chang-n+1;i++)
  {
      for (j=i+1;j<chang-n+2;j++)
      {
          if (a[j]==a[i])
          {
                if (a[j+1]==a[i+1])
                {   
                    if(a[j+2]==a[i+2]) 
                    num[i]=num[i]+1; 
                }        
          }
      }  
  }
      int max=0;
      for (j=0;j<chang-n+1;j++)
      {
          if (num[j]>max)
            max=num[j];
            else 
            ;
      }
      
      if (max==1)
      printf("NO");
      else
      {
          printf("%d\n",max);
          for (i=0;i<chang-n+1;i++)
       {
          if (num[i]==max)
          printf("%c%c%c\n",a[i],a[i+1],a[i+2]);
       }
      }
  }
  else if (n==4)
  {
       for (i=0;i<chang-n+1;i++)
  {
      for (j=i+1;j<chang-n+2;j++)
      {
          if (a[j]==a[i])
          {
                if (a[j+1]==a[i+1])
                {   
                    if(a[j+2]==a[i+2]) 
                    {  
                      if (a[j+3]==a[i+3])
                      num[i]=num[i]+1; 
                    }
                }        
          }
      }  
  }
      int max=0;
      for (j=0;j<chang-n+1;j++)
      {
          if (num[j]>max)
            max=num[j];
            else 
            ;
      }
      
      if (max==1)
      printf("NO");
      else
      {
          printf("%d\n",max);
          for (i=0;i<chang-n+1;i++)
       {
          if (num[i]==max)
          printf("%c%c%c%c\n",a[i],a[i+1],a[i+2],a[i+3]);
       }
      }
  }
  

  return 0;
}