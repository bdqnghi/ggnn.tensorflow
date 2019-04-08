
int main()
{
	int n,i,k,h,hengsum=0,js=1,spj,susum=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		spj=1;
		if(hengsum==0)
			js=i;
		for (k=1;k<=n;k++)
		{
			scanf("%d", &h);
			if (h==0)
			{
				if (spj==1)
				{
					susum+=1;
					spj++;
				}
					
				if (js==i)
					hengsum+=1;
			}

		}
	}
	printf("%d",(susum-2)*(hengsum-2));
	return 0;
}