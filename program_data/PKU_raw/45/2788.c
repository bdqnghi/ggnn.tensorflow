int main()
{
	char c1[100],c2[100];
	int s1,s2,i,j,c;
	scanf("%s %s",&c1,&c2);
	s1=strlen(c1);
	s2=strlen(c2);
	for(i=0;i<s2;i++)
	{
		c=0;
		if(c1[0]==c2[i])
		{
			c=1;
			for(j=1;j<s1;j++)
			{
				if(c1[j]!=c2[i+j])
				{
					c=0;
					break;
				}
			}
			if(c==1)
			{
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
}