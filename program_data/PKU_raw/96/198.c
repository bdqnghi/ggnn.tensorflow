main()
{
    char a[1000],b[1000]; 
    int r,i,l,m;
    scanf("%s",a);
    l=strlen(a);
    if(l==1)
    printf("0\n%d",a[0]-'0'); 
    else if(l==2&&a[0]-'0'==1&&a[1]-'0'<3)
    printf("0\n%d",10+a[1]-'0');         
    else               
         {
                    if(a[0]-'0'==1&&a[1]-'0'<=2)
                        {
                        m=(a[0]-'0')*100+(a[1]-'0')*10+a[2]-'0';
                        r=m%13;
                        b[0]=m/13+'0';
                            for(i=3;i<l;i++)
                               {
                               m=r*10+a[i]-'0';
                               r=m%13;
                               b[i-2]=m/13+'0';
                               }
                         b[l-2]='\0';      
                        }
                    else
                        {
                         m=(a[0]-'0')*10+a[1]-'0';      
                         r=m%13;
                         b[0]=m/13+'0';       
                             for(i=2;i<l;i++)
                              {
                               m=r*10+a[i]-'0';
                               r=m%13;
                               b[i-1]=m/13+'0';                        
                              }   
                          b[l-1]='\0';
                        }
                   printf("%s\n%d",b,r);
         }
   getchar();
   getchar();     



}
