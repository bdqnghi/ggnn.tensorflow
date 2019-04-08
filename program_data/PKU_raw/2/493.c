typedef char q[30];
void init(int a[],int f[],q *p[lll],int m)
{
	int i;

char e[432];
char *pp;
int r;
	for(i=1;i<=m;i++)
	{ 
		p[i]=(q *)malloc(sizeof(q));
	
		scanf("%d%s",&f[i],p[i]);
		getchar();
		pp=*p[i];
		while (*pp!='\0')
		{a[*pp]++;
		 pp++;
	    }
     
	}
	
}
char pro(int a[])
{
	char c,max,g;
	max=-333;
	for (c='A';c<='Z';c++) 
		
	if (a[c]>max) {max=a[c];g=c;}
	return g;
}
void print(int f[],q *p[lll],int m,char c)
{
	int i;
		for (i=1;i<=m;i++)
			if (strchr(*p[i],c)!=NULL) printf("%d\n",f[i]);
}
int main()
{
	int m,k;
	int a[343]={0};
		int f[lll];
		q *p[lll];
		char max;
	//freopen("tt.in","r",stdin);
	//freopen("tt.out","w",stdout);
	scanf("%d",&m);
		
	init(a,f,p,m);
	max=pro(a);
	printf("%c\n%d\n",max,a[max]);

	print(f,p,m,max);

}
