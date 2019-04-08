int main()
{
	int len1,len2,i,j,m,control=0;
	char st[256],sub[256],re[256];
	gets(st);
	gets(sub);
	gets(re);
	len1=strlen(st);
	len2=strlen(sub);
	int k=0;
	for(i=0,j=0;i<len1;i++)
	{
		if(k==0&&sub[j]==st[i])
		{
			if(len2==1)
			{
				for(m=0;m<i;m++)
					printf("%c",st[m]);
				printf("%s",re);
				for(m=m+1;m<len1;m++)
					printf("%c",st[m]);
				control=1;
				break;
			}
			else
			{
				k++;
				j++;}
		}
		else if(k!=0&&sub[j]!=st[i])
		{
			k=0;
			j=0;}
		else if(k!=0&&sub[j]==st[i])
		{
			if(j==len2-1)
			{
				for(m=0;m<i-j;m++)
					printf("%c",st[m]);
				printf("%s",re);
				for(m=m+len2;m<len1;m++)
					printf("%c",st[m]);
				printf("\n");
				control=1;
				break;
			}
			else
			{
				k++;
				j++;}
		}
	}
	if(control==0)
		puts(st);
	return 0;
}
				