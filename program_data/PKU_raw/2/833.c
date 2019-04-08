void main()
{
	int m,num[1000],i,k,l=0,a[26]={0};
	char nam[1000][10],j;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d%s",&num[i],nam[i]);
    for(j='A';j<='Z';j++)
		for(i=0;i<m;i++)
		    if(strchr(nam[i],j))
				a[j-65]++;
			for(i=0,k=a[0];i<26;i++)
				if(a[i]>k)
				{
					k=a[i];
					l=i;
				}
				printf("%c\n",l+65);
				printf("%d\n",k);
				for(i=0;i<m;i++)
				{
					if(strchr(nam[i],l+65))
						printf("%d\n",num[i]);
				}
}
