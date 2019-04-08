void main()
{
	char str1[100],str2[101]={" "},str3[101]={"\0"};
	int i,n,p=1,j,q=0,m;
	int a[100];
	char c;
	gets(str1);
	strcat(str2,str1);
	n=strlen(str2);
	for(i=n-1;i>=0;i--)
	{
		if((c=str2[i])==' ')
		{
			a[p]=i;
			p=p+1;
		}
		else
			continue;
	}
	a[0]=n;
	for(i=0;i<p-1;i++)
		for(j=a[i+1];j<a[i];j++)
		{
			str3[q]=str2[j];
			q=q+1;
		}
	m=strlen(str3);
	for(i=1;i<m;i++)
		printf("%c",str3[i]);
}
