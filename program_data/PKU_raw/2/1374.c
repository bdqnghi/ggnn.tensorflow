int main()
{struct book{
	int num;
	char s[26];
}b[1000];
struct author{
	int n[1000];
	int p;
	char c;
}a[26],e;

int i,j,k,m,q,max;
char d;
for(i=0;i<26;i++)
	a[i].p=0;
for(i=0,d='A';i<26;i++,d++)
{a[i].c=d;}
scanf("%d",&m);
for(i=0;i<m;i++)
{scanf("%d%s",&b[i].num,b[i].s);}
for(i=0;i<m;i++)
{for(j=0;;j++)
{if(b[i].s[j]=='\0')
	break;
for(k=0;k<26;k++)
{if(b[i].s[j]==a[k].c)
{a[k].n[a[k].p]=b[i].num;
a[k].p+=1;}}}}
max=a[0].p;
e=a[0];
for(i=0;i<26;i++)
{if(a[i].p>max)
{e=a[i];max=a[i].p;}}
printf("%c\n",e.c);
printf("%d\n",e.p);
for(j=0;j<e.p;j++)
	printf("%d\n",e.n[j]);}
