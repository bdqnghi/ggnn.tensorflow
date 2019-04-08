
int main()
{
	char a[999],b[999],* aa,* bb;
	char c[999][999],* cc;
	char d[999];
	gets(b);
	gets(a);
	gets(d);
	int len=strlen(a);
	int len2=strlen(b);
	int k=0,i,j=0;
	for(bb=b;*(bb+len-1)!='\0';bb++,k++)
	{
		i=0;
		for(cc=c[k];i<len;i++,cc++)
		{
			* cc=* (bb+i);
		}
		* cc='\0';
		j++;
	}
	int sp=0;
	for(i=0;i<j;i++)
	{
		if(strcmp(a,c[i])==0)
		{
			sp=1;
			break;
		}
	}
	char e[2][999];
	int pom=i;
	for(i=0;i<pom;i++)
	{
		e[0][i]=b[i];
		e[0][pom]='\0';
	}
	k=0;
	for(i=pom+len;i<len2;i++,k++)
	{
		e[1][k]=b[i];
	}
	e[1][k]='\0';
	if(sp==1)
	{
		printf("%s%s%s",e[0],d,e[1]);
	}
	if(sp==0)
	{
		puts(b);
	}
	return 0;
}