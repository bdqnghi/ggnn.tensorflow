main()
{
      char str1[250];
      char str2[250];
      char str3[250];
      char str4[251];
      char str5[251];
      int a,b,c,n,i;
      scanf("%s%s",str1,str2);
      for(i=0;i<250;i++)
      { 
          a=i;
          if(str1[i]==0)
          break;      
      }
      for(i=0;i<250;i++)
      {
          b=i;
          if(str2[i]==0)
          break;       
      }
      if(a>b)
      {
            n=a;
            for(i=(a-1);i>=0;i--)
            {
                  if(i<(a-b))
                  str2[i]='0';
                  else
                  str2[i]=str2[i-(a-b)];
            }          
      }
      if(b>a)
      {
            n=b;
            for(i=(b-1);i>=0;i--)
            {
                  if(i<(b-a))
                  str1[i]='0';
                  else
                  str1[i]=str1[i-(b-a)];
            }          
      }
      if(b==a)
      n=a;
      for(i=(n-1);i>=0;i--)
      {
           str3[i]=str1[i]+str2[i]-'0'-'0';
      }
      for(i=(n-1);i>0;i--)
      {
           if(str3[i]>9)
             {
                  str4[i+1]=str3[i]-10;
                  str3[i-1]=str3[i-1]+1;
             }
           else
             str4[i+1]=str3[i];             
      } 
      if(str3[0]>9)
      {
           str4[1]=str3[0]-10;
           str4[0]=1;         
      }
      else
      {
          str4[1]=str3[0];
          str4[0]=0;
      }
      int f=0;
      for(i=0;i<=n;i++)
      {
          c=i;
          if(str4[i]!=0)
          break;
      }
      for(i=c;i<=n;i++)
      {
          printf("%d",str4[i]);
          f=1;
      }
      if(f==0)
      printf("%d",f);
      
}
