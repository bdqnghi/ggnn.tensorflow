int f(int x,int y)
{
	int z=1,i;
	if(y==0)
		z=1;
	else
	for(i=0;i<y;i++)
		z*=x;
	return(z);
}
void main()
{
   int i,m,n,k,s=0,d=0;
   char a[100]={0},b[100]={0};
   scanf("%d",&m);
   scanf("%s",a);
   scanf("%d",&n);
   k=strlen(a);
   for(i=0;i<k;i++)
   {
	   if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-'a'+10;
	   else if(a[i]>='A'&&a[i]<='Z')
		    a[i]=a[i]-'A'+10;
	   else
		    a[i]=a[i]-'0';
	   s=k-1-i;
	   d+=a[i]*f(m,s);
   }
   i=0;
   while(i>=0)
   {
		b[i]=d%n;
		if(b[i]>9)
			b[i]=b[i]-10+'A';
		else
			b[i]=b[i]+'0';
		d=d/n;
		if(d==0)
			break;
		i++;
   }
	k=i;
	for(i=k;i>=0;i--)
		printf("%c",b[i]);
}