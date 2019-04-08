int main()
{
    int n,i,j,k,s,m,t,p,r;
    int a[100],b[100];
    char str1[100][10],str2[100][10];
    char string[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s %d",str1[i],&a[i]);
    for(p=0,s=0;p<n;p++)
    {
    if(a[p]>=60)
    {
    b[s]=a[p];
    strcpy(str2[s],str1[p]);
    s=s+1;
}
}
    for(k=0;k<(s-1);k++)
    {
    for(m=0;m<(s-k-1);m++)
    {
     if(b[m+1]>b[m])
     {
     t=b[m+1];
     b[m+1]=b[m];
     b[m]=t;
     strcpy(string,str2[m+1]);
     strcpy(str2[m+1],str2[m]);
     strcpy(str2[m],string); 
     }
     }
     }
     for(j=0;j<s;j++)
     printf("%s\n",str2[j]);
     for(r=0;r<n;r++)
     {
     if(a[r]<60)
     printf("%s\n",str1[r]);
     }
     getchar();
     getchar();
     getchar();
     getchar();
     getchar();
     getchar();
     }