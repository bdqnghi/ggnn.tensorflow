void main()
{
	char a[100],b[100],*p;
	int i,j,q=0,t;
	scanf("%s%s",a,b);
	for(p=b,t=0;p<b+strlen(b);p++,t++)
	{
		if(*p==*a)
		{
			for(j=1;j<strlen(a);j++,p++)
			{
				if(*p=!*(a+j))
				{
					q=1;
					break;
				}
				if(q==0)
				{
					printf("%d\n",t);
					break;
				}
			}
		}
	}
}