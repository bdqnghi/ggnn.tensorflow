int main()
{
	char s[500],sub[500][5],subt[5];
	int a[500]={1,0};
	int n,i,j,h,t;
	scanf("%d\n",&n);
	gets(s);
	int len=strlen(s);
	for(i=0;i<=len-n;i++)
	{
           for(j=i;j<=i+n-1;j++)
	  sub[i][j-i]=s[j];
	  sub[i][n]='\0';
	}
	for(i=1;i<=len-n;i++)
	{
		h=1;
		for(j=0;j<=i-1;j++)
		{
		  if(strcmp(sub[i],sub[j])==0)
		  {
		   sub[i][0]='\0';a[j]=a[j]+1;h=0;break;		  }
		  }
		if(h==1) a[i]=a[i]+1;
	}
	for(i=0;i<=len-n-1;i++)
	{
           h=i;
	  for(j=i+1;j<=len-n;j++)
	  {
           if(a[j]>a[h]) h=j;
	  }
	  if(h!=i) {strcpy(subt,sub[h]);strcpy(sub[h],sub[i]);strcpy(sub [i],subt);t=a[h];a[h]=a[i];a[i]=t;}
	}
  if(a[0]==1) printf("NO\n");
  else
  {	
         printf("%d\n",a[0]);
	for(i=0;i<=len-n;i++)
	{
		if(a[i]==a[0])
		printf("%s\n",sub[i]);
	}
  }
}