

int main()
{
	int n,i,j,k,a[105]={0},b[105]={0},c[105]={0},l1,l2,l,cha;
	char s1[105],s2[105];

	scanf ("%d",&n);
	for (k=1;k<=n;k++)
	{
	   scanf("%s %s",s1,s2);
       l1=strlen(s1);
       l2=strlen(s2);
       
       for (i=0;i<=l1-1;i++)
	   {
	      a[i]=s1[l1-i-1]-'0';
	   }
	   for (j=0;j<=l2-1;j++)
	   {
	      b[j]=s2[l2-j-1]-'0';
	   }
	   for (i=0;i<=l1-1;i++)
	   {
	     c[i]=a[i]-b[i];
		 if (c[i]<0)
		 {
		   c[i]+=10;
		   a[i+1]-=1;
		 }
	   }
	   while (c[l1]==0&&l1>0)
	   {
	     l1--;
	   }
	   for (i=l1;i>=0;i--)
	   {
	     printf("%d",c[i]);
		 
	   }
	   printf ("\n");
	   for (i=0;i<=104;i++)
	   {
	   a[i]=0;b[i]=0;c[i]=0;
	   }
	}

	return 0;
}
