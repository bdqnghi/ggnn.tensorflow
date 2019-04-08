main()
{
 int n,oversix=0,undersix=0,osix[100],usix[100],t;
 char noosix[100][100]={0},nousix[100][100]={0},a[100][100]={0};
 char s[100][100]={0};
 scanf("%d",&n);
 int b[100];
 for(int i=0;i<n;i++)
            {
             scanf("%s %d",a[i],&b[i]);           
            }
 for(int i=0;i<n;i++)
            {
             if(b[i]>=60)
                       {
                        oversix++;
                        osix[oversix-1]=b[i];
                        strcpy(noosix[oversix-1],a[i]);                         
                       }
             else
                       {
                        undersix++;
                        usix[undersix-1]=b[i];
                        strcpy(nousix[undersix-1],a[i]);                                             
                       }         
             }
 for(int j=0;j<oversix-1;j++)
             for(int i=0;i<oversix-1-j;i++)
                       if(osix[i]<osix[i+1])
                              {
                               t=osix[i];
                               strcpy(s[i],noosix[i]);
                               osix[i]=osix[i+1];
                               strcpy(noosix[i],noosix[i+1]);
                               osix[i+1]=t;
                               strcpy(noosix[i+1],s[i]);       
                              }
 for(int i=0;i<oversix;i++)
 printf("%s\n",noosix[i]);
 for(int i=0;i<undersix;i++)
 printf("%s\n",nousix[i]);
 getchar();
 getchar();   
}
