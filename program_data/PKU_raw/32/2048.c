int main()
{
	int n,i,leng_a,leng_b,tag=0,a[128],b[128];
	char s1[128],s2[128];
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<128;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		scanf("%s%s",s1,s2);
		leng_a=strlen(s1);
		leng_b=strlen(s2);
		for(i=0;i<leng_a;i++)
			a[i]=s1[leng_a-i-1]-'0';
		for(i=0;i<leng_b;i++)
			b[i]=s2[leng_b-i-1]-'0';
		for(i=0;i<leng_a;i++)
		{
			if(a[i]>=b[i])
				a[i]-=b[i];
			else
			{
				a[i]=a[i]-b[i]+10;
				a[i+1]--;
			}
		}
		tag=0;
			for ( i =leng_a-1; i >= 0; i--)
			{
				if (a[i] != 0)
					tag = 1;
				if (tag == 1)
				{
					printf("%d",a[i]);
				}
				if (tag == 0 && i == 0)
					printf("0");
			}
			printf("\n");
	}
	return 0;
}