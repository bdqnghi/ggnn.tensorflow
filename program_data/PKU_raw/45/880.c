void main()
{
     char str[100];
     int i,j,k,m,n;
     gets(str);
     n=strlen(str);
     for(i=0;i<n;i++)
         if(str[i]==' ') 
         {
            k=i+1;
            break;
         }
     for(i=0;i<n-k;i++)
         if(str[i+k]==str[0])
         {
            for(m=1,j=0;j<k-1;j++)
                if(str[j]!=str[i+j+k])
                {
                   m=0;
                   break;
                }
            if(m==1)
            {
               printf("%d",i);
               break;
            }
         } 
}