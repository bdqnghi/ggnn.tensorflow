/* Note:Your choice is C IDE */
main()
{
   char s[300],a[300],b[300];
   int x,y,z,i,k;
   gets(s);
   gets(a);
   gets(b);
   x=strlen(s);
   y=strlen(a);
   z=strlen(b);
   for(k=0;k<=x-1;k++)
   {
   	 int q=1;
     for(i=k;q!=9&&i<=k+y-1;i++)
     {
   	   if(s[i]!=a[i-k])
   	   q=9;
     }
     if(q==9) continue;
     else if(q==1&&((s[k-1]==' '&&k>0)||k==0))
     {
     	if(y>=z)
     	{
     	  for(i=k;i<=k+z-1;i++)
     	  s[i]=b[i-k];
     	  for(i=k+z;i<=299;i++)
     	  s[i]=s[i+y-z];
     	}
     	else if(y<z)
     	{
     	  for(i=299;i>=k+z;i--)
     	  s[i]=s[i+y-z];
     	  for(i=k;i<=k+z-1;i++)
     	  s[i]=b[i-k];
     	}
     } 
     k+=z-1;
   }
   printf("%s",s);
}