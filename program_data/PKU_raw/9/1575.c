int main()
{
    int n,i,j,k=0,t=0,y[100],x,a[100]={0},b[100];
    char s[100][20],temp[20],s1[100][20],s2[100][20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%s %d",s[i],&y[i]);
     }
    for(i=0;i<n;i++)
    {
      if(y[i]>=60)
      {
        strcpy(s1[k],s[i]);
        a[k]=y[i];
        k++;
        }
      }
  //    for(i=0;i<k;i++)
  //    printf("%s %d@@\n",s1[i],a[i]);
    for(i=0;i<k-1;i++)
     for(j=0;j<k-i-1;j++)
     if(a[j]<a[j+1])
     {
        x=a[j];
        a[j]=a[j+1];
        a[j+1]=x;
        strcpy(temp,s1[j]);
        strcpy(s1[j],s1[j+1]);
        strcpy(s1[j+1],temp);
      }
     for(i=0;i<k;i++)
     printf("%s\n",s1[i],a[i]);
       for(i=0;i<n;i++)
    {
      if(y[i]<60)
      {
        strcpy(s2[t],s[i]);
        t++;
        }
      }
     for(i=0;i<t;i++)
     printf("%s\n",s2[i]);
     return 0;
}
