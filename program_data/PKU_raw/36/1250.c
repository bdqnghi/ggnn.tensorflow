int main()
{
	char a[number], s[number], tmp;
	int i, m, j;
	for(i=0;i<100;i++)
	{
		a[i]=' ';
		s[i]=' ';
	}
	scanf("%s%s", a, s);
	for(j=0;j<98;j++)
	{
		for(i=0;i<98-j;i++)
		{
			if(a[i]<a[i+1])
			{
	    		tmp=a[i];
    			a[i]=a[i+1];
    			a[i+1]=tmp;
			}
	    	if(s[i]<s[i+1])
			{
	    		tmp=s[i];
	    		s[i]=s[i+1];
	    		s[i+1]=tmp;
			}
		}
	}
	m=1;
	for(i=0;i<98;i++)
	{
		if(a[i]!=s[i])
		{
			m=0;
			break;
		}
		if(a[i]==' ')
			break;
	}
	if(m==0)
		printf("NO\n");
	else if(m==1)
		printf("YES");
	return 0;
}