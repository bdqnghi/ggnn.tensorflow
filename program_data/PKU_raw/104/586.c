int main()
{
	int m,n,a[20]={0},b[20]={0},i,j,k,l,num=0;
	scanf("%d %d",&m,&n);
	a[0]=m;b[0]=n;
	for(i=1;a[i-1]>=2;i++)
		a[i]=a[i-1]/2;
    for(l=1;b[l-1]>=2;l++)
		b[l]=b[l-1]/2;
	for(j=0;j<i;j++)
	{for(k=0;k<l;k++)
		if(a[j]==b[k])
		{	printf("%d",a[j]);num++;
		break;
		}
     if(num)
		 break;
	}
	return 0;
}
		







