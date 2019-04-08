int main()
{
    int a,b;
    int l,j,m,k;
    int s=0;
    char n[40],x[40],y[40];
    scanf("%d %s %d",&a,n,&b);
    
    l=strlen(n);
    for(int i=0;i<l;i++)
    {
            if(n[i]>='a'&&n[i]<='z')
               n[i]=n[i]-'a'+10;
            else if(n[i]>='A'&&n[i]<='Z')
                    n[i]=n[i]-'A'+10;
                 else n[i]=n[i]-'0';
                 s=n[i]+s*a;
    }
    if(s==0) printf("0");
    else
    {
    for(j=0;s!=0;j++)
    {
            x[j]=s%b;
            s=(int)s/b;
    }
  for(k=0;k<j;k++)
  {
           y[k]=x[j-1-k];
   }
    for(int i=0;i<j;i++)
    {
    if(y[i]>9) y[i]=y[i]-10+'A';
            else y[i]=y[i]+'0';
    }
    
  y[j]='\0';

    printf("%s",y);
}
    getchar();
    getchar();
            
}