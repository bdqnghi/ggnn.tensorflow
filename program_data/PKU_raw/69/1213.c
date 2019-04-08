void sum(char str1[],char str2[],int m,int n)
{
      char str3[251],b;
      int i,a,x,y=0;
      a=n-m;
      for(i=n-1;i>=0;i--)
      {
         if (i<a) str3[i]=str2[i];
         else
         {              
         b=str2[i]+str1[i-a]-48;
         if (b>57)
            {
                str3[i]=b-10; 
                str2[i-1]=str2[i-1]+1;
                for(x=i-1;x>=0;x--)
                {if (str2[x]==58) {str2[x]='0';str2[x-1]=str2[x-1]+1;}}
            }
        else str3[i]=b;
         }               
      } 
      for(i=0;;i++) {if(str3[i]=='0') y++;else break;}
      if (y==n) printf("%c",'0');
      else
      {for(i=y;i<n;i++)
       printf("%c",str3[i]);
      }
}     
main()
{
     char str1[251],str2[251],str3[251],str4[251];
     int i,m=0,n=0,b;
     scanf("%s",str1);
     scanf("%s",str2);
     for(i=0;str1[i]!='\0';i++)
     {
       m=m+1;
     }
     for(i=0;str2[i]!='\0';i++)
     {
       n=n+1;
     } 
     if(m>n) 
     {
          b=n;n=m;m=b;
          for(i=0;i<=n;i++)
          {
             if(i==0) str3[i]='0';
             else str3[i]=str1[i-1];                 
          }
 
          sum(str2,str3,m,n+1);
     }
     else
     {
         for(i=0;i<=n;i++)
          {
             if(i==0) str4[i]='0';
             else str4[i]=str2[i-1];                 
          }
         sum(str1,str4,m,n+1); 
     }
     
}
