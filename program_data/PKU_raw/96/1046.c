main()
{
      int a[102],p[102],t,i,j,s,q;
      char str[102];
      scanf("%s",&str);
      t=strlen(str);
      for (i=0;i<t;i++)
        {
            a[i]=0;
            p[i]=0;
        }
      for (i=0;i<t;i++)
        {
            a[i]=str[i]-'0';
        }
      s=a[0];
      if(str[1]!='\0'&&!(str[2]=='\0'&&str[0]=='1'&&str[1]<'3'))
       {for (j=0;j<t-1;j++)
        {  s=s*10+a[j+1];
           q=s%13;
           p[j]=(s-q)/13;
           s=q; 
        }
       if(p[0]==0)
       {for(j=1;j<t-1;j++)
         {printf("%d",p[j]);}
       }
       else
       {for(j=0;j<t-1;j++)
         {printf("%d",p[j]);}
       }
       printf("\n");
       printf("%d",q);
       }
      else 
        {printf("0\n");
        printf("%s",str);}
}
