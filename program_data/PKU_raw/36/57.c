int main()
{
	char a[100],b[100],flaga[100],flagb[100],bool1=1,bool2=1;
	unsigned int i,j;
	for(i=0;i<100;i++){flaga[i]=0;flagb[i]=0;}
	scanf("%s",a);scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)if(a[i]==b[j]){flaga[i]=1;flagb[j]=1;}
	}
	for(i=0;i<strlen(a);i++)if(flaga[i]==0)bool1=0;
	for(i=0;i<strlen(b);i++)if(flaga[i]==0)bool2=0;
	if(bool1&&bool2)printf("YES");
	else printf("NO");
	return 0;
}