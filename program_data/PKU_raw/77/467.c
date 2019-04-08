char c1, c2;
int num, k=0;
int s[1000][2];
int main()
{
	int i,j,temp;
    void f(char str[1000]);
	char c[1000];
	gets(c);
    c1=c[0];
	num=strlen(c);
	for(i=1;i<num;i++)
    {
		if(c[i]!=c1) {c2=c[i];break;}
	}
	f(c);
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-1-i;j++)
		{
		    if(s[j][1]>s[j+1][1])
			{
				temp=s[j+1][1];
				s[j+1][1]=s[j][1];
				s[j][1]=temp;
	            temp=s[j+1][0];
				s[j+1][0]=s[j][0];
				s[j][0]=temp;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d %d\n", s[i][0], s[i][1]);
	}
	printf("\n");
	return 0;
}
void f(char str[1000])
{
	int i, j;
	for (i=0;i<num-1;i++)
		if (str[i]==c1)
		for (j=i+1;j<num;j++)
		{
			if (str[j]==c1) break;
			if (str[j]==c2)
			{
				s[k][0]=i; s[k++][1]=j;
				str[i]=' '; str[j]=' ';
				break;
			}
		}
	if (k*2<num)
		f(str);
}
