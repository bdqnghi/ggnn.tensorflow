void numchange(int x, int y, char c[100]);
int main()
{
	int a, b;
	char s[100]={0};
         int i;
	scanf("%d", &a);
	scanf("%s", s);
	scanf("%d", &b);
         for(i=0;i<strlen(s);i++)
         {if(s[i]>='a') s[i]=s[i]-'a'+'A';}
	numchange(a,b,s);
         return 0;
}
void numchange(int x, int y, char c[100])
{
	int i, l, k=0;
	long int s=0;
	char m[100]={0};
	l = strlen(c);
	for(i=0;i<=l-1;i++)
	{
		if((c[i]>='0')&&(c[i]<='9'))
			s=s*x+c[i]-'0';
		if((c[i]>='A')&&(c[i]<='Z'))
			s=s*x+c[i]-'A'+10;
	}
	for(i=0;;i++)
	{
		if(y<=10) m[i] = s%y+'0';
		else 
		{
			if(s%y<10) m[i] = s%y + '0';
			else m[i] = s%y - 10 + 'A';
		}
		s = (s-s%y)/y;
		k++;
		if(s==0) break;
	}
	for(i=k-1;i>=0;i--)
		printf("%c", m[i]);
}
