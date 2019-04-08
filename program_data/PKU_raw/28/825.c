int main()
{
	char a[1301]={0};
	int i,j,l,t=0;
	gets(a);
	l=(int)strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ')
			t=t+1;  
			if(t!=0&&a[i]==' ')
			{
			    printf("%d,",t);
		     	t=0;
			}
	}
	printf("%d",t);
         return 0;
}
