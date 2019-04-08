void main()
{
  int i,j,r,h; 
  r=0;
  h=0;
  char s[100],change[20],s3[20],s1[99][99],space[1]={" "};
  gets(s);
  strcat(s,space);
  gets(change);
  gets(s3);
  for(i=0;i<=99;i++)
  {
    if(s[i]==32)
    {
      for(j=r;j<=i-1;j++)
      {
        s1[h][j-r]=s[j];
      }
      r=i+1;
      h++;
    }
  }
  for(i=0;i<h-1;i++)
  {
    if(strcmp(change,s1[i])==0) strcpy(s1[i],s3);
    printf("%s ",s1[i]);
  }
  printf("%s",s1[h-1]);
}