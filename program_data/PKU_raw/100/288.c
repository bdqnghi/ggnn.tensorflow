void main()
{
	char a[300],b[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int c[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},i,j,t=0;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
		for(j=0;j<26;j++)
		{
			if(a[i]==b[j])
			{	c[j]=c[j]+1;
			t=1;}
		}
		if(t==0)
			printf("No");
		else
			for(i=0;i<26;i++)
			{
				if(c[i]!=0)
				printf("%c=%d\n",b[i],c[i]);
			}
}
