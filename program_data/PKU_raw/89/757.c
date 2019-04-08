int main()
{
	int n,i;
	scanf("%d",&n);
	int num1[10000];
	int num2[10000];
	int order[10000];
	int a,b;
	for(i=0;i<n;i++)
	{
	  num1[i]=0;
	  num2[i]=0;
	  order[i]=i;
	}
	while(1)
	{
	  scanf("%d %d",&a,&b);
	  if(a==0&&b==0)
	  {
		break;
	  }
	  num2[a]=num2[a]+1;
	  num1[b]=num1[b]+1;
	}
	for(int k=1;k<n;k++)
	{
	  for(i=0;i<n-k;i++)
	  {
		if(num1[i]>=num1[i+1])
		{
		  int e1=num1[i+1];
		  num1[i+1]=num1[i];
		  num1[i]=e1;
		  int e2=order[i+1];
		  order[i+1]=order[i];
		  order[i]=e2;
		  int f=num2[i+1];
		  num2[i+1]=num2[i];
		  num2[i]=f;
		}
	  }
	}
	int max=num1[n-1];
	int num=1;
	for(i=n-1;max==num1[i];i--)
	{
	  num++;
	}
	if(max!=n-1)
	{
	  printf("NOT FOUND");
	}
	if(max==n-1)
	{
	  for(i=n-1;num1[i]==n-1;i--)
	  {
		if(num==1)
		{
		  if(num2[i]==0)
		  {
		    printf("%d",order[i]);
			break;
		  }
		  if(num2[i]!=0)
		  {
		    printf("NOT FOUND");
		    break;
		  }
		}
		if(num>1)
		{
	      if(num2[i]==0)
		  {
		    printf("%d\n",order[i]);
		  }
		}
		  num--;
	  }
	}
	return 0;
}