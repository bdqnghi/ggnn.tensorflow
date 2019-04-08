int main()
{
  char c[200];
  int a[200],b[200];
  int yushu;
  gets(c);
  int m,i;
  m=strlen(c);
  for(i=0;i<m;i++)
  {
	a[i]=c[i]-'0';
  }
  if(m>2)
 {
		if((a[0]*10+a[1])>=13)
 {
		yushu=a[0];
		for(i=1;i<m;i++)
		{
			b[i]=(yushu*10+a[i])/13;
			yushu=(yushu*10+a[i])%13;
		}
	for(i=1;i<m;i++)	
	{
		printf("%d",b[i]);
	}
	printf("\n");
	printf("%d",yushu);
 }
 else
 {
		yushu=a[0]*10+a[1];
		for(i=2;i<m;i++)
		{
			b[i]=(yushu*10+a[i])/13;
			yushu=(yushu*10+a[i])%13;
		}
	for(i=2;i<m;i++)	
	{
		printf("%d",b[i]);
	}
	printf("\n");
	printf("%d",yushu);
 }
}
if(m==2)
{
	printf("%d\n",(a[0]*10+a[1])/13);
	printf("%d",(a[0]*10+a[1])%13);
}
if(m==1)
{
	printf("0\n");
	printf("%d",a[0]);
} 	
}