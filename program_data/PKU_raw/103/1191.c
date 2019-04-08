main ()
{
     int n,i,j,k,sum=0;
     char s[1001],c;
     for(i=0;i<1001;i++) s[i]='\0';
     scanf("%s",s);
     for(i=0;s[i]!='\0';)
     {
          k=0;
          for(j=i;j<1001;j++)
          {
               if(s[i]==s[j] || s[i]==s[j]+32 || s[i]==s[j]-32) k++;
               else if(s[i]!=s[j] && s[i]!=s[j]+32 && s[i]!=s[j]-32) 
               {
                    printf("(%c,%d)",(s[i]>='a' && s[i]<='z')?(s[i]-32):s[i],k);
                    sum=sum+k;i=sum;break;
               }
          }
     }
     
}
   


   