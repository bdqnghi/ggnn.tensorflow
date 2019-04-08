
void main()
{
	int s=0,n,i,j,b[26]={0},t,x,m,q;
    char a[1000][27];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<n;i++)
	{  
		t=strlen(a[i]);
		for(j=4;j<t;j++)
		{
			x=a[i][j];
			b[x-65]=b[x-65]+1;
		}
	}
	for(i=0;i<26;i++)
	{
		if(b[i]>s)
		{s=b[i];x=i;}
	}
	printf("%c\n",x+65);
	printf("%d\n",s);
	for(i=0;i<n;i++)
	{
		t=strlen(a[i]);
		for(j=4;j<t;j++)
		{
			m=a[i][j];
			if(m==x+65)
			{ 
				for(q=0;q<2;q++)
				{printf("%c",a[i][q]);}
			    printf("%c\n",a[i][2]);
			}
		}
	}




	
}