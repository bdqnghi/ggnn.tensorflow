void houzhui()
{
  int len;
  char str[32];
  gets(str);
  len=strlen(str);
  if((str[len-2]=='e'&&str[len-1]=='r')||(str[len-2]=='l'&&str[len-1]=='y'))
    str[len-2]='\0';
  if(str[len-3]=='i'&&str[len-2]=='n'&&str[len-1]=='g')
    str[len-3]='\0';
  puts(str);
}

main()
{
      int a,i;
      scanf("%d",&a);
      getchar();
      for(i=0;i<a;i++)
        houzhui();
}
