char s[1000],s1[100][100];
int flag=0;
void f(char x,char y);
int main()
{
	int i,len[100],k,j,temp;
	char s2[100];
	gets(s);
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i-1]==s[i])
		{
			s1[flag][0]=s[i-1];
			s1[flag][1]=s[i];
			flag++;
		    f(i-1,i);
		}
	}
	k=flag;
	for(i=0;i<k;i++)
	len[i]=strlen(s1[i]);
	for(i=0;i<k;i++)
	{
		for(j=1;j<k-i;j++)
		{
			if(len[j-1]>len[j])
			{
				temp=len[j-1];
				len[j-1]=len[j];
				len[j]=temp;
				strcpy(s2,s1[j-1]);
				strcpy(s1[j-1],s1[j]);
				strcpy(s1[j],s2);
			}
		}
	}
	for(i=0;i<k;i++)
    printf("%s\n",s1[i]);

}

void f(char x,char y)
{
	char *p2,*p;
	int i;
	if(x>=1&&s[y+1]!='\0')
	{
		if(s[x-1]==s[y+1])
		{
			p2=&s[y+1];
			for(p=&s[x-1],i=0;p<=p2;p++,i++)
			s1[flag][i]=*p;
			flag++;
			f(x-1,y+1);
		}
	}
}