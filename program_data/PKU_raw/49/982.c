int main()
{
	char a[501],*p;
	int num=0,i,j,m,len;
	scanf("%s",a);
	len=strlen(a);
	for(i=2;i<=len;i++)
	{
		for(p=a,j=0;j<=len-i;j++,p++)
		{
			for(m=i-1;m>0;m-=2,p++)
			{
				if(*p!=*(p+m))
				{
					num=1;
					break;
				}
			}
			if(num==0)
			{
				for(p=&a[j],m=1;m<=i;m++,p++)
				{
				printf("%c",*p);
				}
				printf("\n");
			}
			num=0;
			p=&a[j];
		}
	}
	return 0;
}


