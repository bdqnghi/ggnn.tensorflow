int main()
{
	char a[100];
	gets(a);
	int length=strlen(a);
	char nan,nv;
	nan=a[0];
	int i,j;
	for(i=0;i<length;i++)
	{
		if(a[i]!=nan) {nv=a[i];break;}
	}
    int b[100]={0};
	for(i=0;i<length;i++)
	{
		if(a[i]==nv)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]==nan&&b[j]==0) {printf("%d %d\n",j,i);b[j]=1;break;}
			}
		}
	}
	/*printf("%c %c",nan,nv);*/
	return 0;
}