int s[100]={0},t[100]={0},n,i,j,m=0;
char ss[100][100];
int cmp(const void *a, const void *b)
{return(*(int *)b-*(int *)a);}
int main() 
{
scanf("%d",&n); 
for(i=0;i<n;i++)
scanf("%s %d",ss[i],&s[i]);
for(j=0;j<n;j++)
{
	m=0;
	for(i=0;i<n;i++)
		{m=m>s[i]?m:s[i];}
	if(m<60) {break;}
	
	for(i=0;i<n;i++)
	{
		if(s[i]==m) 
		{printf("%s\n",ss[i]);
		s[i]=-1;}
		
	}
	
}
	for(i=0;i<n;i++)
	{if(s[i]!=-1)
	{printf("%s\n",ss[i]);}
	}
}