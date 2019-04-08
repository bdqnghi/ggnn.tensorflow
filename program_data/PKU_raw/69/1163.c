main()
{
  char str1[200],str2[200];
  scanf("%s%s",str1,str2);
  int c[200]={0};
  int a,b,l1,l2,i,l=0;
  l1=(int)strlen(str1);
  l2=(int)strlen(str2);
  while(l1>0||l2>0)
  {
     a=l1>0?str1[l1-1]-'0':0;
     b=l2>0?str2[l2-1]-'0':0;
     c[l+1]=(c[l]+a+b)/10;
     c[l]=(c[l]+a+b)%10;
     l1--;
     l2--;
     l++;
}
while(l>0&&c[l]==0)
 l--;
for(i=l;i>=0;i--)
  printf("%d",c[i]);

}