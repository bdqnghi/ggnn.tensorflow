int main()
{
  
    char a[500];
    char str[500][6]={{'\0'},{'\0'}}; 
    int c[500]={0}; 
    int n,l,i,j,max;
    scanf("%d",&n); 
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l-n;i++)
      for(j=0;j<=n-1;j++)
        str[i][j]=a[i+j];
    for(i=0;i<=l-n;i++)
    {
     for(j=i;j<=l-n;j++)
     if(strcmp(str[j],str[i])==0)
     c[i]++;
    }//??????????c[]
    max=c[0];
    for(i=1;i<=l-n;i++)
    if(c[i]>max) max=c[i]; //?????????
    if(max==1) printf("NO");
    else  
    {
      printf("%d\n",max); 
      for(i=0;i<=l-n;i++)
      if(c[i]==max) 
      printf("%s\n",str[i]);
    } 
    return 0;
} 
      