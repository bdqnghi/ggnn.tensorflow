int main()
{
	char m[250];
	char n[250];
	char x[250];
	char total[255];
	int sl1=0,sl2=0,i,j,a,tmp=0,head=0;
	gets(m);
	gets(n);
	strcpy(x,m);
	for(i=0;m[i]!=0&&(m[i]>='0'&&m[i]<='9');i++)
	{
		sl1++;
	}
	for(i=0;n[i]!=0&&(n[i]>='0'&&n[i]<='9');i++)
	{
		sl2++;
	}
	if(sl1<sl2)
	{
		strcpy(m,n);
		strcpy(n,x);
		a=sl1;
		sl1=sl2;
		sl2=a;
	}
	for(j=0;j<=sl2;j++)
	{
		n[sl1-j]=n[sl2-j];
	}
	for(j=sl2+1;j<=sl1;j++)
	{
		n[sl1-j]='0';
	}
	for(i=sl1-1;i>=0;i--)
	{
		if(m[i]-'0'+n[i]-'0'+tmp>9)
		{
			total[i]='0'+(m[i]-'0'+n[i]-'0'+tmp)%10;
			tmp=1;
		}
		else
		{
			total[i]=m[i]+n[i]+tmp-'0';
			tmp=0;
		}
	}
	if(tmp==1)
	{
		printf("1");
		head=1;
	}
	for(j=0;j<sl1;j++)
	{
		if(total[j]=='0'&&head==0&&j!=sl1-1)
		{
			head=0;
			continue;
		}
		head=1;
		printf("%c",total[j]);
	}
	printf("\n");
	return 0;
}