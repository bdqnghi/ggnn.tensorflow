int main()
{
	char ch[100];
	char q;
	int n,i,l,k,r,t;
	int a[100];
	scanf("%d",&n);
	gets(ch);
	for(i=1;i<=n;i++)
	{
		
		gets(ch);
		r=strlen(ch);
		l=ch[0];
		if((l>=65&&l<=90)||(l==95)||(l<=122&&l>=97))
		{a[i-1]=1;}
		else {a[i-1]=0;}
	 for(t=1;t<=r-1;t++)
	{
		if((ch[t]<=64&&ch[t]>=58)||(ch[t]>=91&&ch[t]<=94)||(ch[t]==96)||(ch[t]>=123)||(ch[t]<=47))
		{a[i-1]=0;}

	}
	   
	
	}
   for(k=1;k<=n;k++)
   {
	   printf("%d\n",a[k-1]);
   }
   return 0;
}
