main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  char a[100001]	;
	  scanf("%s",a);
	  int k,j,p,q=0,count;
	  p=strlen(a);
	  for(k=0;k<p-1;k++)
	  {
	  	count=1;
	  	if(a[k]=='@') continue;
	  	for(j=k+1;j<p;j++)
	  	{
	  		if(a[k]==a[j])
	  		{
	  			a[j]='@';
	  			count=0;
	  		}
	  	}
	  	if (count==1) {printf("%c",a[k]);break;} 
	  }
	  if (k==p-1) printf("no");
	  printf("\n");
	}
} 