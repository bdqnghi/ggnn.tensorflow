
int main(){
	int i,p,n=0,s=0;
	char snt[1000];
	gets(snt);
	for(i=0;snt[i]!='\0';i++)
	{
		n++;
	}
	for(i=0;i<=n;i++)
	{
		s=0;
		if(snt[i]==' ')
		{
			for(p=i+1;snt[p]==' ';p++)
			{
				s++;
			}
			for(p=i+1;p<=n-s;p++)
			{
				snt[p]=snt[p+s];
			}
		}
		n-=s;
	}
	printf("%s\n",snt);
	return 0;
}

