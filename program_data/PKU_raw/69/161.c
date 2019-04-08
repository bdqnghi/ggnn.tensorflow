void main()
{
  char a[255],b[255],c[255],*p;
  int k=0,m,n,t,i;
  scanf("%s%s",a,b);
  m=strlen(a);
  n=strlen(b);
  if(m>n)
  {
    for(p=b+n-1;p>=b;p--)
		*(p+m-n)=*p;
	for(p=b+m-n-1;p>=b;p--)
		*p='0';
  }
  else 
  {
    for(p=a+m-1;p>=a;p--)
		*(p+n-m)=*p;
	for(p=a+n-m-1;p>=a;p--)
		*p='0';
  }
  t=m>n?m:n;
  for(i=t;i>0;i--)
  {
    *(c+i-1)=*(b+i-1)+*(a+i-1)-'0'+k;
	if(*(c+i-1)>'9')  
	{
		*(c+i-1)-=10;
	    k=1;
	}
	else k=0;
  }
  if(k==1)
  {
    for(i=t;i>0;i--)
		*(c+i)=*(c+i-1);
	*(c+0)='1';
	*(c+t+1)='\0';
  }
  else *(c+t)='\0'; 
  for(p=c;*p=='0';p++)
  {
  }
  printf("%s",p);
  if(m==1&&n==1&&b[0]=='0'&&a[0]=='0')  printf("0");
  printf("\n");
}