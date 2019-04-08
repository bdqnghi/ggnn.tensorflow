
int MAX(int,int);
main()
{
      char a[251],b[251],c[251];
      int t=0,len1,len2,i,j,m;
      scanf("%s%s",a,b);
      len1=strlen(a);
      len2=strlen(b);
      if(len1<len2)
      { for(i=len1-1;i>=0;i--)
         {a[i+len2-len1]=a[i];
         }
for(i=0;i<=len2-len1-1;i++)
        {  a[i]='0';
        }
      }
      else if(len1>len2)
           {for(i=len2-1;i>=0;i--)
              {b[i+len1-len2]=b[i];
              }
            for(i=0;i<=len1-len2-1;i++)
              {  b[i]='0';
              }
           }
      m=MAX(len1,len2);
      for(i=0;i<=250;i++)
      {  c[i]='\0';
      }
      for(i=m-1;i>=0;i--)
      {c[i]=(a[i]-'0'+b[i]-'0'+t)%10+'0';
     /* printf("%c",a[i]);*/
       t=(a[i]-'0'+b[i]-'0'+t)/10;
      }
      if(t==1)
{ for(i=m-1;i>=0;i--)
           c[i+1]=c[i];
         c[0]='1';
       }
       len2=strlen(c);
       for(i=0;i<=len2-1;i++)
       {if(c[i]!='0')
          break;
       }
       
       if(i==len2)
          printf("0");
       else
         {for(j=i;j<=len2-1;j++)
           {  printf("%c",c[j]);
           } 
         } 
      } 
int MAX(int a,int b)
{
    if(a>=b)
      return a;
    else
      return b;
}
