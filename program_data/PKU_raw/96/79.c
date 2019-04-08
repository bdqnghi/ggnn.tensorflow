main()
{
      char a[2000]; int d,c[2000],n,b[2000],f=0;
   scanf("%s",a);
int i=0; while (a[i]!='\0') {c[i]=a[i]-'0'; i++;}
n=i;
  d=c[0];
    for(int i=1;i<n;i++)
    {
            b[i]=(d*10+c[i])/13;
            d=(d*10+c[i])%13;
            }
        for(int i=1;i<n;i++)
        {
                if(b[i]!=0) {
                            f=i;
                            break;} 
                } 
                int j=0; 
  for(int i=f;i<n;i++,j++)       
  a[j]=b[i]+'0';a[j]=0;if (f==0) {a[0]='0'; a[1]=0;}
//      for(int i=0;a[i]!='\0';i++) printf("%c",a[i]);
     printf("%s",a);
       printf("\n");
      printf("%d",d);
}

