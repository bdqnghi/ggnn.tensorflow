
struct info 
{ 
	int num; 
	char author[26]; 
} a[1000];

int main()
{
	int i,m,j,b[26]={0};
	char out;
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	scanf("%d %s\n",&a[i].num,a[i].author);
	for(i=0;i<m;i++)
		for(j=0;j<26;j++)
			b[a[i].author[j]-'A']++;
	int max=b[0];
	for(i=0;i<26;i++)
		max=max>b[i]?max:b[i];
	for(i=0;i<26;i++)
		if(b[i]==max)
		{
			out='A'+i;
			printf("%c\n",'A'+i);
			printf("%d\n",b[i]);
			break;
		}
	for(i=0;i<m;i++)
		for(j=0;j<26;j++)
			if(a[i].author[j]==out)
			{
				printf("%d\n",a[i].num);
				break;
			}
}