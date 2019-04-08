void main()
{
	int i,j=0,n,p;
	char str[100][50],sub[100][50],c[100],t;
	c[0]=getchar();
	do
	{
		p=-1;
		t=c[j];
		scanf("%s%s",str[j],sub[j]);

		for(i=0;i<strlen(str[j]);i++)
		{
			if(str[j][i]>t)
			{
				p=i;
				t=str[j][i];
			}
		}
		for(i=strlen(str[j]);i>p;i--)str[j][i+(n=strlen(sub[j]))]=str[j][i];
		for(i=0;i<n;i++)str[j][p+1+i]=sub[j][i];
		j++;
		c[j]=getchar();
	}while(c[j]==10);
	for(i=0;i<j;i++)printf("%c%s\n",c[i],str[i]);
}