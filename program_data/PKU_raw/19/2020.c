char a[2000];
char sub[2000];
int b[2000];
int jianyan[1000];
int main()
{
	gets(a);
	gets(sub);
	int i,j=0,v=0,count_jianyan=0,l=strlen(a),l_sub=strlen(sub);
	for(int r=0;r<l;r++)
	{
		if(a[r]==' ')
		{
			jianyan[count_jianyan]=r;
			count_jianyan++;
		}
	}
			for(int u=0;u<l_sub;u++)
		{
			if(a[u]==sub[u])
			{
				b[0]++;
			}
		}
	while(v<count_jianyan)
	{
		i=jianyan[v]+1;
		for(j=0;j<l_sub;j++)
		{
			if(a[i+j]==sub[j])
			{
				b[i]++;
			}
		}
		v++;
	}
	int k=0,w[1000],count=0;
	for(int gl=0;gl<1000;gl++)
	{
		w[gl]=999;
	}
	for(k=0;k<2000;k++)
	{
		if(b[k]==l_sub)
		{
			w[count]=k;
			count++;
		}
	}
	char c[300];
	gets(c);
	int q=0,m=0;
	if(count!=0)
	{
	while(q<l)
	{
		if(q==w[m])
		{
			printf("%s",c);
			q+=l_sub;
			m++;
		}
		if(q!=l)
		{printf("%c",a[q]);}
		q++;
	}
	}
	else if(count==0)
	{
		puts(a);
	}
	return 0;
}