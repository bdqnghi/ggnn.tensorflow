int main()
{
    char a[50],b[50];
    scanf("%s %s",a,b);
    int j,q,p=0,l;
    for(;;)
    {
       for(j=p;;j++)
       {
         if(a[0]==b[j])
         {    
           p=j;    
           break;    
         }  
       }  
       for(l=1;a[l]!='\0';l++)
       {
           if(a[l]!=b[j+l])
           {  
              q=1;
              break;
           }
           else q=0;
       }
       if(q==0)
         break;
    }
       printf("%d\n",p);
      return 0;   
}    