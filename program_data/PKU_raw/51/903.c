
int main(int argc, char* argv[])
{
	int i,j,l,n,c[1000]={0},m=0;
	char a[1000],b[1000][5];
	scanf("%d%s",&n,a);
	l=strlen(a);
	memset(b,0,sizeof(b));
    for(i=0;i<l-n+1;++i)
        strncpy(b[i],a+i,n);
	for(i=0;i<l-n+1;++i)
		for(j=i+1;j<l-n+1;++j)
            if(strcmp(b[i],b[j])==0)
			{
				++c[i];
                if(c[i]>m)
					m=c[i];
			}
    if(m==0)
		printf("NO\n");
	else
	{
		printf("%d\n",m+1);
		for(i=0;i<l-n+1;++i)
			if(c[i]==m)
				printf("%s\n",b[i]);
	}
	return 0;
}