main()
{
      int n,l,p1,p2,p3,p4,c=2;
      char a[100];
      scanf("%d",&n);getchar ();
      for(int i=1;i<=n;i++)
      {
              
              gets (a);
              l=strlen(a);
              p1=a[0]-'_';p2=a[0]-'a';p3=a[0]-'A';
              if(p1==0||(p2<=26&&p2>=0)||(p3<=26&&p3>=0))
                  {
                            if(l>=2)
                            {
                                    for(int j=1;j<l;j++)
                                    {
                                    p1=a[j]-'_';p2=a[j]-'a';p3=a[j]-'A';p4=a[j]-'0';
                                    if(p1==0||p2<=26&&p2>=0||p3<=26&&p3>=0||p4>=0&&p4<=9)
                                    c=1;
                                    else
                                    {c=0;break;}
                                    }
                            }
                            else
                            printf("1\n");
                            
                  }
              if(c==1)
                  printf("1\n");
              else
                 { 
                  if(l!=1)
              printf("0\n");}
              c=2;
      }
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
