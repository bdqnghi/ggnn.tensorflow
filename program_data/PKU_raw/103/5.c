main()
{
        char a[1001];
        scanf("%s",a);
        int l=strlen(a);
        int i;
        for(i=0;i<l;i++)
        {
          if(a[i]>='a'&&a[i]<='z')
          a[i]=a[i]-'a'+'A';
        }
       int ncount =1;
           for(i=0;i<l;i++)
           {
             if(a[i+1]==a[i])
             ncount++;
             else
             {
                printf("(%c,%d)",a[i],ncount);
                ncount=1;
             }
           }
       getchar();
       getchar();
       getchar();
       

}
