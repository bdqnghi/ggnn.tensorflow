int main()
{
    int a[20],i=0,j=0,n=0;
	while(scanf("%d",&a[i]),a[i]!=-1)
	{
		while(scanf("%d",&a[i+1]),a[i+1]!=0)
			i=i++;
      for(i=0;a[i]!=0;i++)
		  for(j=i;a[j]!=0;j++)
		  {
			  if(a[i]==2*a[j]||2*a[i]==a[j])
				  n=n++;
		  }
		  printf("%d\n",n);
		  n=0;
i=0;
	}
	return 0;
}
