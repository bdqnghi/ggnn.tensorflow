void main()
{
	char s1[51],s2[51];
	char *p1,*p2;
	int a,n;
	a=0;
	scanf("%s",s1);
	scanf("%s",s2);
	n=strlen(s1);
	for(p2=s2;(*p2)!='\0';p2++)
	{
		for(p1=s1;(*p1)!='\0';p1++)
		{
			if((*p1)==(*p2))
			{
				p2++;
				a=p2-s2-n;
			}
			else
			{
				break;
			}
			
		}
		if(a!=0)
		{
			break;
		}
		
	}
	printf("%d",a);

}
