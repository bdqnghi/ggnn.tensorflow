main()
{
   int i,j,k=0,l;
   char a[100],b[100];
   gets(a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
    if(a[i]!=' ')
   {b[k]=a[i];
   k++;}
    else
    {   j=i;
        b[k]=' ';
        k++;
        while(a[j]==' ')
     j++;
     i=j-1;
     }
     b[k+1]='\0';
     }
   puts(b);
   getchar();
   getchar();
   getchar();
}
