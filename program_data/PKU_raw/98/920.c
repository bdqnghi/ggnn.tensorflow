int judge(char *p1,char *p2,int l)
{
	char *x1,*t1,*t2;
    int y=1;
	t1=p1;
	x1=t1+l-1;
	t2=p2;
	while ((t1<=x1) && y)
	{
		if (*t1!=*t2) y=0;
		t1++;
		t2++;
	}
	return y;
}

void main()
{
	char c[3243];
		int i,j,k,n,l,len;
	//freopen("tt.in","r",stdin);
	//freopen("tt.out","w",stdout);
    scanf("%d",&n);
	//for(i=0;i<=l-1;i++) if (c[i]==' ') k++;

	
	len=0; 
	for (i=1;i<=n;i++) 
	{

    scanf("%s",c);
	l=strlen(c);
	if (len==0) {printf("%s",c); len+=l;}
	else
	   if (len+l+1<=80)
	   {
		printf(" %s",c);len+=l+1;
	   }
	   else 
	   {printf("\n%s",c); len=l;}

	}
	

	
}