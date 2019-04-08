int main()
{
	char a[500],*p1,*p2,*p3,*p4,*p5,*p6;
	int i,l,j,flag;
	gets(a);
	l=strlen(a);
	for(j=1;j<=l-1;j++)
	{
		p1=a;p2=&a[j];
		for(i=0;i<l-j;i++,p1++,p2++)
		{
			p5=p1;p3=p1;p6=p2;p4=p2;
			flag=0;
			for(;p3<=p4;p3++,p4--)
			{
				if(*p3!=*p4)flag++;
			}
			if(flag==0)
			{
				for(;p5<=p6;p5++)
				{
					printf("%c",*p5);
				}
				printf("\n");
			}
			
		}
	}
	return 0;
}
