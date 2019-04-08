int main()
{	
	int n,i,j,m,a=0,b=100,p,t;	
	char c[203][1050];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			scanf("%s",c[i]);
			strlen(c[i]);
			if(strlen(c[i])>a)
			{
				a=strlen(c[i]);
				p=i;
			}
			if(strlen(c[i])<b)
			{
				b=strlen(c[i]);
				t=i;
			}	
	}
	printf("%s\n",c[p]);
	printf("%s\n",c[t]);
	return 0;
}
