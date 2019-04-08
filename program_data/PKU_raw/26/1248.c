void main ()
{
     char s[1000];
     int l,i,j,a[1000]={0};
     gets(s);
     l=strlen (s);
     for (i=0;i<l;i++)
     {
         if (s[i]==' ')
         {
               for (j=i+1;s[j]==' ';j++)
               {
                   a[j]=1;
               }
               i=j;      
         }
     }
     for (i=0;i<l;i++)
     {
         if (a[i]==0)
         printf("%c",s[i]);
     } 
     
}
