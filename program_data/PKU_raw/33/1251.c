int main()
{
   char a[1000][255];
   int m,i,k,j;
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
       scanf("%s",a[i]);
   }
   for(j=0;j<m;j++)
   {
       for(k=0;k<255;k++)
       {
           if(a[j][k]=='A')
           printf("T");
           else if(a[j][k]=='T')
           printf("A");
           else if(a[j][k]=='C')
           printf("G");
           else if(a[j][k]=='G')
           printf("C");
       }
       printf("\n");
   }
   return 0;
}
