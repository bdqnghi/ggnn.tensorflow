int maxaaaa(int x,int y)
{
	int z;
	if(x>y) z=x;
	else z=y;
	return (z);
}



int minaaaa(int x,int y)
{
	int z;
	if(x>y) z=y;
    else z=x;
	return (z);
}

		/*?????*/
int main()
{
	int i,j,m,a[1000],max,min;
	int maxaaaa(int x,int y);
	int minaaaa(int x,int y);
	char q;
	for(i=1;;i++)
	{
		scanf("%d",&a[i-1]);
		q=getchar();
		if(q=='\n') break;
	}
	/*????*/
	if(i==1) printf("No");
	else
	{
		for(m=i;m>=1;m--)
		{
		    for(j=1;j<=m-1;j++)
			{
		        min=minaaaa(a[j],a[j-1]);
		        max=maxaaaa(a[j],a[j-1]);
		        a[j]=max;
		        a[j-1]=min;
			}
		}
		for(m=i;m>=2;m--)
		{
			if(a[m-1]>a[m-2])
			{
				printf("%d",a[m-2]);
				break;
				
			}
		    
		}
		if(m==1) printf("No");
	}
	return 0;
}
