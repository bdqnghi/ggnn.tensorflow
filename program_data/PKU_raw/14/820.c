/* Note:Your choice is C IDE */
void main()
{
    struct student
    {
    	int a;
    	int b;
    	int c;
    	int d;
    	int h;
    }s[100000];
    int i,j,k,n,max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d%d%d",&s[i].a,&s[i].b,&s[i].c);
    	s[i].d=s[i].b+s[i].c;
    	s[i].h=-1;
    }
    for(i=1;i<=3;i++)
    {
    	max=0;
    	k=0;
    	for(j=1;j<=n;j++)
    	{
    		if((s[j].d>max)&&(s[j].h==-1))
    		{
    			max=s[j].d;
    			k=j;
    		}
    	}
    	s[k].h=1;
    	printf("%d %d\n",s[k].a,s[k].d);
    }
}