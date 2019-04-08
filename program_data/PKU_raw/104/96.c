void main()
{
	int a,b,i,x1[100],x2[100],j,m,k,flag=0;
	scanf("%d %d",&a,&b);
	x1[0]=a;
	x2[0]=b;
	for(i=1;;i++)
	{
		x1[i]=x1[i-1]/2;
		if(x1[i]==0)
		break;
	}
    for(j=1;;j++)
	{
		x2[j]=x2[j-1]/2;
		if(x2[j]==0)
		break;
	}
	for(k=0;k<=i;k++)
	{
		for(m=0;m<=j;m++)
		{
			if(x1[k]==x2[m])
			{
				printf("%d",x1[k]);
				flag=1;
				break;
			}
			
		}
      if(flag==1)
		  break;
	}

}

