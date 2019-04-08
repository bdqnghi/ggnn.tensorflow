main()
{    
    
    int q;
    scanf("%d",&q);
    for(int s=0;s<q;s++)
    {       char a[100000];
            int n,i,j,m,k=0;
            scanf("%s",a);
            n=strlen(a);
                for(i=0;i<n;i++)
                    {   m=0;
                        for(j=0;j<n;j++)
                        {
                           if(a[i]==a[j])
                           m++;
                        }
                        if(m==1)
                        {printf("%c\n",a[i]);
                         k=1;
                        break;}
                    }
  if(k==0)
  printf("no\n");
    }
}
