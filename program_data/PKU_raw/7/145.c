void main()
{
	char a[100],b[100],c[100];
	int i,a1,b1,c1,n=0,m,t,j,p=0;
	scanf("%s %s %s",a,b,c);
	a1=strlen(a);
	b1=strlen(b);
	c1=strlen(c);
	for(i=0;i<a1;i++)
	{
		for(j=0;j<b1;j++)
		{
			if(a[i+j]==b[j]) p=p+1;
		}
		if(p==b1) 
		{
			for(m=0;m<i;m++)
				printf("%c",a[m]);
			printf("%s",c);
			for(m=b1+i;m<a1;m++)
				printf("%c",a[m]);
			n=9;break;
		}
		p=0;
	}
	if(n==0) printf("%s",a);
}






			

  
