
main()
{
      char a[1010],m=0;
      int i,j;
      scanf("%s",a);
      for(i=0;i<999;)
      {
                         for(j=i;j<999;j++)
                         {
                                           if(a[i]==a[j]||a[i]==a[j]+'A'-'a'||a[i]==a[j]-'A'+'a')
                                           m++;
                                           else
                                           break;}
                                           if(a[i]>='a'&&a[i]<='z')
                                           a[i]=a[i]+'A'-'a';
                                           printf("(%c,%d)",a[i],m);
                                           i=i+m;
                                           m=0;
                                           if(a[i]==0)
                                           break;
                                           }
                                           
                                           }
                         
                         
                         
