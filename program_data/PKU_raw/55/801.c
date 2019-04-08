int cf(int a,int b)
{   int i,s;              
    if(b==0)
    s=1;
    for(s=1,i=1;i<=b;i++)
    s=a*s;               
     return (s);
               }
main()
{   int a,b,i,t,s,j,d[1000],k;              
    char c[1000],x;
    scanf("%d %s %d",&a,c,&b); 
    t=strlen(c);
    for(i=0;i<=t-1;i++)
    { if(c[i]<='Z'&&c[i]>='A')
       c[i]=c[i]-'A'+10;               
      if(c[i]<='z'&&c[i]>='a')
       c[i]=c[i]-'a'+10; 
      if(c[i]<='9'&&c[i]>='0')
       c[i]=c[i]-'0';                      
                       }  
      for(i=0,j=t-1,s=0;i<=t-1;i++,j--)
       s=c[i]*cf(a,j)+s;
       if(s==0)
       printf("0");
    else                    
    {  for(i=0;s>0;i++)
    { d[i]=s%b;
      s=s/b;              
        k=i;        }  
         
        for(i=k;i>=0;i--)                                   
    {  if (d[i]<=9)                     
      printf("%d",d[i]);
      else 
      printf("%c",d[i]-10+'A');
                          }  
                          }
}
