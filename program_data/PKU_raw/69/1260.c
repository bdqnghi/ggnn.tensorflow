int main()
{
    char str1[250],str2[250],str3[251];
  int X,i,X1,X2,a[250]={0},b[250]={0},c[250]={0};
 scanf("%s\n%s",str1,str2);
 X1=strlen(str1);
 X2=strlen(str2);
 X=X1;
 if (X2>X)
 X=X2;
 for (i=0;i<X1;i++)
 a[X1-1-i]=str1[i]-'0';
 for (i=0;i<X2;i++)
 b[X2-1-i]=str2[i]-'0';
    for (i=0;i<=X;i++)
     {
                                  c[i]=a[i]+b[i];
                                  c[i]=c[i]%10;
                               if (i!=0)
                              { 
                               if ((a[i-1]+b[i-1]==9)&&(c[i-1]==0))
                                c[i]=c[i]+1;
                                  c[i]=c[i]%10;
                               if ((a[i-1]+b[i-1])>=10)
                                c[i]=c[i]+1;
                                  c[i]=c[i]%10;
                              }   
                     
     }
     if (c[X]==0)
     {
        for (i=0;i<X;i++)
     {str3[X-1-i]=c[i]+'0';} 
     
     str3[X]='\0';    
     for (;;)
     {
         if (str3[1]=='\0')
         break;
         if (str3[0]!='0')
         break;
         if (str3[0]=='0')
         for (i=0;i<X;i++)
         {str3[i]=str3[i+1];}
      
      }                 
     printf("%s",str3);
     }
     if (c[X]==1)
     {
        for (i=0;i<=X;i++)
     {str3[X-i]=c[i]+'0'; }                  
         str3[X+1]='\0'; 
           for (;;)
     {
           if (str3[1]=='\0')
             break;
         if (str3[0]!='0')
             break;
         if (str3[0]=='0')
           for (i=0;i<X;i++)
      
           {str3[i]=str3[i+1];}
      
      }                                   
     printf("%s",str3);
     }          
}
