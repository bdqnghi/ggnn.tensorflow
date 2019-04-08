int main()
{
	int a[15],i=1,j,k,*p,count=0;
    scanf("%d",&a[0]);
	while(a[0]!=-1)
	{
		for(i=1;;i++)
		{
			scanf("%d",&a[i]);
		if(a[i]==0)
			break;
		}
	    p=a;
	    for(j=0;j<i;j++)
		{
		  for(k=0;k<i;k++)
		  {
			if(p[j]==p[k]*2)
				count++;
		  } 
		}
	    printf("%d\n",count);
		count=0;
	    scanf("%d",&a[0]);
	}
	return 0;
}