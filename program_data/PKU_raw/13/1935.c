int main()
{
	int a[20000],t,j,m,i,asd;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{t=1;
	scanf("%d",&a[i]);
	if(i==0)
	{printf("%d",a[i]);}
	else if(i!=0)
	{
	for(j=0;j<i;j++)
    {asd=a[i]-a[j];
	if(asd==0)
	{t=0;
	break;}
	}if(t==1)
		printf(" %d",a[i]);
	
	}
	}
	
	printf("\n");
	return 0;
	}	
