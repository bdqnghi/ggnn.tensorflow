main()
{
  int n,i,l,j,k;
  char a[100000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {int count=0;
   scanf("%s",a);
   l=strlen(a);
   for(j=0;j<l-1;j++)
   {
     for(k=0;k<l;k++)
     {if(a[j]==a[k]&&j!=k)
       break;
        }
     if(k==l)
     {count++;
      if(count==1)
      printf("%c\n",a[j]);}
   }
   if(count==0)
   printf("no\n");
}
   getchar();
   getchar();
   getchar();
}
