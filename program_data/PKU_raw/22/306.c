int cmp(const void*a,const void*b)
{	
	return( 0-*(int*)a+*(int*)b);
}

void main()
{
	int i=0,j,k,n,a[300]={0},max;
	char t;
	while((t=getchar())!=EOF)
	{
		if(t<='9'&&t>='0')
		a[i]=10*a[i]+t-'0';
		else
		i++;
	}
	qsort(a,i+1,sizeof(int),cmp);
	max=a[0];
	for(j=0;j<i+3;j++)
	{	
		if(a[j]==0) 
		{
			printf("No");
			break;
		}
		else if(a[j]!=max)
		{
			printf("%d",a[j]);
			break;
		}
	}

}

