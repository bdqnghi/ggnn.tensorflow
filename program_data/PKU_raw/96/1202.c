main()
{
      int i,chu,yu=0,count=0,shang[100],count2=0;
      char a[100];
      gets(a);
      for(i=0;i<100;i++)
      {
                        chu=yu*10+(int)(a[i]-'0');
                        shang[i]=chu/13;
                        count2++;
                        yu=chu%13;
                        if(a[i+1]=='\0')break;
      }
      if(count2==1 || count2==2){count=count2-1;}
      else if(shang[1]==0)count=2;
      else count=1;            
      for(i=count;i<count2;i++)
      {
                               printf("%d",shang[i]);
      }
      printf("\n%d",yu);
}