int main()
{
    
    int a,b,c,d,e,f,g,h,i,j,k;
    long int n;
    char str1[40],str2[40];
    scanf("%d %s %d",&a,str1,&b);
    c=strlen(str1);
    n=0;
    for(i=c-1,j=0;i>=0,j<=c-1;i--,j++)
   
    {
     if(str1[j]>='0'&&str1[j]<='9')
     d=str1[j]-48;    
     else 
     {
          if(str1[j]>='A'&&str1[j]<='Z')
           d=str1[j]-55;
           else
           d=str1[j]-87;
     }
     e=1;  
     if(i>0)
     {
    for(k=i;k>0;k--)
     e=e*a;
     }
     n=n+d*e;
    }
    
    
    for(k=0;k<=40;k++)
    {if(n<b)
    {f=n;
     if(f>=0&&f<=9)
     str2[k]=f+48;
     else
     str2[k]=f+55;
     break;}
     else
     {f=n%b;
      if(f>=0&&f<=9)
      str2[k]=f+48;
      else
      str2[k]=f+55;}
      n=(n-f)/b;
     }
g=strlen(str2);
for(h=g-1;h>=0;h--)
printf("%c",str2[h]); 

}
