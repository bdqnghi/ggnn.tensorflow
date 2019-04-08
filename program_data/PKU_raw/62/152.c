main()
{
      int i,j,count;
      char a[300]={'\0'};
      gets(a);
      for(i=0;i<300;i++)
      {
                        if(a[i]=='\0')break;
                        else if(a[i]!=' ')
                        {
                                   printf("%c",a[i]);
                                   count=0;
                        }
                        else if(count==0 && count==0)
                        {
                             printf(" ");count++;
                        }
      }
}