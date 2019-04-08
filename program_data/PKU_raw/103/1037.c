
main()
{
      int i,j,k,t;
      i=j=k=0;
      int b[1000];
      while(k<1000) 
      {b[k]=1;
      k++;}
      char a[1000];
      gets(a);
      for(k=0;k<1000;k++)
      {
          if (a[k]>'Z')  {a[k]=a[k]-32;}
      }
      while(i<1000)
         { j=i;
                     if (a[j]=='\0')
                     break;
                     while(a[j]==a[j+1])
                     {
                         b[j+1]=b[j]+1;
                         j++;
                         
                     }
                         printf("(%c,%d)",a[j],b[j]);
                         i=j+1;
                   
         }           
     
      }