int main()
{
	int w,i,j,k,d,s,a[12];
	scanf("%d",&w);
	s=0;
	k=0;
	for(i=1;i<=12;i++)
	{
		d=0;
		j=i-1;
		if(j==1||j==3||j==5||j==7||j==8||j==10)
		{
			s+=31;
		}
		else if(j==2)
		{
			s+=28;
		}
		else if(j==4||j==6||j==9||j==11)
		{
			s+=30;
		}
		d=s+13;
		d=d%7;
		if((d+w-1==5)||(d+w-8==5))
		{
			a[k++]=i;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d",a[i]);
		if(i!=k-1)
		{
			printf("\n");
		}
	}
	return 0;
}
