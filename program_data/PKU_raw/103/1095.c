int main ()
{
   char c[1000];
   gets (c);
   int k=strlen (c);
   for (int s=0;s<k;s++)
     if (c[s]>='a'&&c[s]<='z')   c[s]=c[s]-'a'+'A';   
   int a[1000]={0},p=0;
   char C[1000];
   for (int i=0,j;i<k;i++)
     {  
       if (i>0&&c[i]==c[i-1]) continue;
       else 
         for (j=i;j<k;j++)
         {
          if (c[i]==c[j])
             {
               a[p]++;
               C[p]=c[i];
             }
          else 
             {
               p++;
               break;  
             }
         }   
     }
    for (int q=0;q<=p;q++) 
       printf ("(%c,%d)",C[q],a[q]);         
} 