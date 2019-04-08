main()
{
      int i,j,k,l,n,m;
      char a[1000];
      gets(a);
      l=strlen(a);
      for(i=0;i<l;i++)
      {
        if(a[i]>='a'&&a[i]<='z')
        a[i]=a[i]-'a'+'A';
      }
      k=1;
      for(i=0;i<l;i++)
      {
         if(a[i]==a[i+1])
           k++;
         else
         {
             printf("(%c,%d)",a[i],k);
             k=1;
         }
      }
getchar();
getchar();
}

      
