main()
{
      int i,count=1;
      char a[2000];
      for(i=0;i<2000;i++)a[i]='\0';
      gets(a);
      for(i=0;i<2000;i++)
      {
                         if(a[i]=='\0')break;
                         if(a[i]==a[i+1] || a[i]==a[i+1]+('A'-'a') || a[i]==a[i+1]-('A'-'a'))count++;
                         else
                         {
                             if(a[i]>='a')a[i]=a[i]-('a'-'A');
                             printf("(%c,%d)",a[i],count);
                             count=1;
                         }
      }
}