int main()
{
  char a[1000],b[1000];
  int num[130]={0},is=1,i;
  scanf("%s%s",a,b);
  for(i=0;a[i]!='\0';i++)num[a[i]]++;
  for(i=0;b[i]!='\0';i++)num[b[i]]--;
  for(i=1;i<130;i++)if(num[i]){is=0;break;}
  if(is)printf("YES\n");
  else printf("NO\n");
  return 0;
}
