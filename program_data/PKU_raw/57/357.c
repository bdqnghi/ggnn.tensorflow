void main()
{
   int n,l,i,j;
   char a[50];
   scanf("%d",&n);

   for(j=0;j<=n;j++)
   {
   gets(a);
   l=strlen(a);
   if(a[l-2]=='e'&&a[l-1]=='r')
   {
	   for(i=0;i<l-2;i++){ printf("%c",a[i]);}
	   printf("\n");
	    }
   if(a[l-2]=='l'&&a[l-1]=='y')
   {
	   for(i=0;i<l-2;i++){ printf("%c",a[i]);}
	   printf("\n");
	      }
   if(a[l-3]=='i'&&a[l-2]=='n'&&a[l-1]=='g')
   {
	   for(i=0;i<l-3;i++){ printf("%c",a[i]);}
	   printf("\n");
	      }
   }
}

