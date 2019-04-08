
char str[200 + 1];
int length ,sum , i;
int flag[100 + 1];
char p , q;

void f(char s[] ,int k);

int main()
{   
	int  j;
	cin >> str;
	
	length = strlen(str);
	p = str[0];
	q = str[length - 1];
	j = 0; 
	for( i = 1 ;i <= length -1 ; i++)
		if(str[i] == q)
		{
		    j ++;
			flag[j] = i;
		}
	sum = j;
	f(str,1);
	return 0;
}
void f(char s[],int k)
{
	if(k <= sum)
	{
		for(i = flag[k] ; i >= 0 ; i --)
		{
			if(s[i] == p)
			{
				printf("%d %d\n",i,flag[k]);
				s[i] ='\0';
				s[flag[k]] = '\0';
				break;
			}
		}
		f(s,k+1);
	}
	else
		return;
}

		
		














	