void main()
{
	char c[101], s[101],temp;
	int i,j,k,t,y;
	gets(c);
	for(i=0;;i++)
	{
		if(c[i]=='\0')
			break;
	}
	for(j=0;j<i;j++)
		s[j]=c[i-1-j];
	s[j]='\0';
	//printf("%s\n",s);
	j=-1;k=-1;
	for(i=0;;i++)
	{
		if(s[i]==' '||s[i]=='\0')
		{
			j=k;
			k=i;
			//printf("%d %d\n",j,k);
			for(t=j+1,y=k-1;y>t;t++,y--)
			{
				//printf("s[%d]='%c',s[%d]='%c'\n",t,s[t],y,s[y]);
				temp=s[y];
				s[y]=s[t];
				s[t]=temp;
			}
		}
		if(s[i]=='\0')
			break;
	}
	printf("%s\n",s);
}
			