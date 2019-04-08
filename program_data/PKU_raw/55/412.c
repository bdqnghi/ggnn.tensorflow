void main()
{
  char ch1[1000],ch2[1000];
  long a,b,n=0,i,j,p=1;
  scanf("%d%s%d",&a,ch1,&b);
  for(i=strlen(ch1)-1;i>=0;i--)
  {
    if(ch1[i]>='0'&&ch1[i]<='9')n+=(ch1[i]-'0')*p;
    if(ch1[i]>='A'&&ch1[i]<='Z')n+=(ch1[i]-'A'+10)*p;
    if(ch1[i]>='a'&&ch1[i]<='z')n+=(ch1[i]-'a'+10)*p;
    p*=a;
  }
  if(n!=0)
  {
  for(i=0;n>=1;i++)
  {
    if(n%b<10)ch2[i]=n%b+'0';
    else ch2[i]=n%b+'A'-10;
    n=(n-n%b)/b;
  }
  }
  else {ch2[0]='0';i=1;}
  for(j=i-1;j>=0;j--)
  printf("%c",ch2[j]);
  printf("\n");
}