int main()
{
	char s[500],d[500]={'\0'},d2[500]={'\0'};
	int len,i,j,k,r,c,ent=0;
	scanf("%s",s);
	len=strlen(s);
	for(i=2;i<=len;i++)
	{
		for(j=0;j<=len-i;j++)
		{
			for(c=0;c<=len;c++)
			{d[c]='\0';d2[c]='\0';}
			for(k=j;k<j+i;k++)
				d[k-j]=s[k];
			for(r=0;r<i;r++)
				d2[r]=d[i-1-r];
			if(strcmp(d2,d)==0)
			{
				if(ent==0)
				{printf("%s",d);ent=1;}
				else
					printf("\n%s",d);
			}
		}
	}
}