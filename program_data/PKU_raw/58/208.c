main()
{
int n;
int f;

scanf("%d",&n);
getchar();
char p[n][100];
for(int i=0;i<=n-1;i++)
{
  gets(p[i]);

  f=0;
  int l=strlen(p[i]);
  for(int u=0;u<=l-1;u++)
  {
          if(p[i][u]<=47||(p[i][u]>=58&&p[i][u]<=64)||(p[i][u]>=91&&p[i][u]<=94)||(p[i][u]>=123)||p[i][u]==96)
          f=1;
  }
  if(((p[i][0]=='_')||(p[i][0]>='a'&&p[i][0]<='z')||(p[i][0]>='A'&&p[i][0]<='Z'))&&f==0)
  printf("1\n");
  else
  printf("0\n");


}
}





