main()
{
     int n,i,m=0,t,j,d=0,e=0;char a[100],b[100],c[100];
      for(t=0;t<100;t++)b[t]=0;
     scanf("%d",&n);
     while(d!=n){scanf("%s",a);
       for(t=0;t<100;t++)
       {if(a[t]=='\0') {j=t;break;}}
        for(t=0;t<j;t++)
       {for(i=0;i<j;i++)
      {if(a[t]==a[i]) {b[t]++;}}}
      for(t=0;t<j;t++)
     { if(b[t]==1){m=t+1;break;}
        }
      if(m==0)printf("no\n");
       else printf("%c\n",a[m-1]);
        d++;for(t=0;t<100;t++)b[t]=0;e=0;m=0;}
       getchar();getchar();getchar();getchar();
       }