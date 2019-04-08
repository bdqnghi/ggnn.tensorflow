int main()
{
	int n,m,a[100],t,num;
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=0;
		num=0;
		scanf("%d",&m);
		if(m==0)
			printf("60\n");
		else
		{
			for(k=0;k<m;k++)
			{
				scanf("%d",&a[k]);
			}
			for(j=0;j<m;j++)
			{
				t=a[j]+3*(j+1);
				if(t>63)
					{
						num=60-3*j;
						break;
					}
				if(t>60&&t<=63)
					{
						num=a[j];
						break;
					}
			}
			if(t<=60)
				num=60-m*3;
			printf("%d\n",num);			
			
		}
	}
	
return 0;
}