void main()
{
	char str[1000];
	int n,i,a,b,c,d,e,l,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		e=0;
		gets(str);
		l=strlen(str);
		for(j=0;j<l;j++)
		{
		a=0;
		b=0;
		c=0;
		d=0;
			if(str[j]>64 && str[j]<91 ) a=1;
			if(str[j]>96 && str[j]<123) b=1;
			if(str[j]>47 && str[j]<58 ) c=1;
			if(str[j]==95) d=1;
			if(a==0 && b==0 && c==0 && d==0){e=1; break;}
		}
		if(e==1) {printf("no\n");}
		if(e==0)
		{
			if(str[0]>47 && str[0]<58)
				printf("no\n");
			else 
				printf("yes\n");
		}


	}



}