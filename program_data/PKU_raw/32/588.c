int main()
{
  int n,l1,l2,s3[101],i,j;
  char s1[101],s2[101],s6[2];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {gets(s6);
   gets(s1);
   gets(s2);
  l1=strlen(s1);l2=strlen(s2);
  for(j=1;j<=l2;j++)
  { if (s1[l1-j]>=s2[l2-j]) s3[l1-j]=s1[l1-j]-s2[l2-j];
    if (s1[l1-j]<s2[l2-j])  {s3[l1-j]=10+s1[l1-j]-s2[l2-j];s1[l1-j-1]=s1[l1-j-1]-1;}
  }
  for(j=0;j<l1-l2;j++)
	  s3[j]=s1[j]-'0';
   for(j=0;j<l1;j++)
	  printf("%d",s3[j]);
      printf("\n");
  }
}

