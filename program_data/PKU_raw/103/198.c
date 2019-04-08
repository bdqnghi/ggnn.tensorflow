 main()
{      int m,i,n,p;p=0;
char a[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m'};
char d[30]={'n','o','p','q','r','s','t','u','v','w','x','y','z'};
char b[30]={'A','B','C','D','E','F','G','H','I','J','K','L','M'};
char e[30]={'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};       
                    
      char c[100]; 
      scanf("%s",c);
    
      for(n=0;n<100;n++)
       {if (c[n]=='\0')   break;}
       for(m=0;m<26;m++)
     {for(i=0;i<n;i++)
            {if(a[m]==c[i])
             c[i]=b[m];
             if(d[m]==c[i])
             c[i]=e[m];}} 
      
      do { for(i=p;i<n;i++)
            {if(c[i]!=c[p])  break;}
           
            printf("(%c,%d)",c[p],i-p);
            p=i;
           }while(p!=n);
}               
                      
                                  

                 