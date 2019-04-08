main()
{
  int n,i,t1=0,t2=0,j;
  float m[40]={0},f[40]={0},l;int s[40]={0};char h[6]={'\0'};
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     scanf("%s %f",h,&l);
     if(h[0]=='f') {f[t1]=l;t1++;}
     else {m[t2]=l;t2++;}
  }
  for(i=0;i<t2-1;i++)
  {
    for(j=i;j>=0;j--)
    {
       if(m[j]>m[j+1]) {float t=m[j];m[j]=m[j+1];m[j+1]=t;}
    }
  }
  for(i=0;i<t1-1;i++)
  {
    for(j=i;j>=0;j--)
    {
       if(f[j]<f[j+1]) {float t=f[j];f[j]=f[j+1];f[j+1]=t;}
    }
  }
  for(i=0;i<t2;i++) printf("%.2f ",m[i]);
  for(i=0;i<t1;i++) {if(i!=t1-1)printf("%.2f ",f[i]); else printf("%.2f",f[i]);}
  getchar();
  getchar();
  getchar();
}
