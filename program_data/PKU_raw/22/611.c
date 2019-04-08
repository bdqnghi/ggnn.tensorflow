int main()
{
    int a[300]={0},n=0,i=0,j=0,m=0;
    char b;
    while(1)
    {
     scanf("%d%c",&a[n],&b);
     n++;
     /*if(n==2){if(a[0]>a[1]){i=a[0];j=a[1];m=1;}
     else if(a[0]>a[1]){j=a[0];i=a[1];m=1;}
     else i=a[0];}
     if(n>2){
             if(a[n-1]>i){j=i;i=a[n-1];m=1;}
             else if(a[n-1]<i&&a[n-1]>j){j=a[n-1];m=1;}}*/
     if(b!=',')break;
     }
    //if(m==0)printf("No\n");
    //else printf("%d\n",j);
    for(i=0;i<n;i++){
    for(j=0;j<n-1;j++)
    {
     if(a[j]<a[j+1])
     {
      m=a[j];a[j]=a[j+1];a[j+1]=m;
      }
     }}
    m=0;
    for(i=1;i<n;i++)
    {
     if(a[i]!=a[0])
     {
      printf("%d\n",a[i]);
      m=1;
      break;
      }
     }
    if(m==0)printf("No\n");
}
     
