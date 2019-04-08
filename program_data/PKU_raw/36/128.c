void order(char ch[],int n)
{
	int temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(ch[j]>ch[j+1])
			{
				temp=ch[j];
				ch[j]=ch[j+1];
				ch[j+1]=temp;
			}
		}
	}
}
void main(void)
{
	char ch1[1000],ch2[1000],c;
	int i,j,k,l=1;
	for(k=0;k<1000;k++)
	{
		ch1[k]=' ';
		ch2[k]=' ';
	}
	for(i=0;i<1000&&(c=getchar())!=' ';i++)
		ch1[i]=c;
	for(j=0;j<1000&&(c=getchar())!='\n';j++)
		ch2[j]=c;
	order(ch1,i+1);
	order(ch2,j+1);
	for(k=0;k<1000&&l==1;k++)
		if(ch1[k]!=ch2[k])
		{
			l=0;
			break;
		}
	if(l==1)printf("YES\n");
	if(l==0)printf("NO\n");
}