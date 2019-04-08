void main()
{
  int n,i,j,t,len1,len2;
  char s1[100],s2[100],answer[100],out[100]={0};
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%s",s1);
    scanf("%s",s2);
    len1=strlen(s1);
    t=99;
    for(j=len1-1;j>=0;j--)
    {
       s1[t]=s1[j];
       s1[j]=0;
       t--;
    }
    len2=strlen(s2);
    t=99;
    for(j=len2-1;j>=0;j--)
    {
       s2[t]=s2[j];
       s2[j]=0;
       t--;
    }
    for(j=len2;j<len1;j++) s2[99-j]='0'; 
    for(j=99;j>=0;j--)
    {
      if(s1[j]>=s2[j]) answer[j]=s1[j]-s2[j]+48;
      else
      {
        answer[j]=58+s1[j]-s2[j];
        s1[j-1]=s1[j-1]-1;
      }
    }
    t=0;
    for(j=0;j<=99;j++) out[j]=0;
    for(j=99-len1+1;j<=99;j++) 
    {
      out[t]=answer[j];
      t++;
    }
    printf("%s\n",out);
  }
}