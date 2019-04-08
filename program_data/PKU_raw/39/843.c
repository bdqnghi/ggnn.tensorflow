
int main()
{
	//freopen("tt.in","r",stdin);
	//freopen("tt.out","w",stdout);
	int i,j,n,k,t,max;
	char gan,xi;
	int g1,g2,lun,r;
	char s[333];
	char s1[333];
	scanf("%d",&n);
	r=0;
	max=-999;
	for (i=1;i<=n;i++)
	{
		scanf("%s %d %d %c %c %d",s,&g1,&g2,&gan,&xi,&lun);


		t=0;
		if ((g1>80) && (lun>=1)) t+=8000;
		if ((g1>85) && (g2>80)) t+=4000;
		if (g1>90) t+=2000;
		if ((g1>85) &&(xi=='Y')) t+=1000;
		if ((g2>80) &&(gan=='Y')) t+=850;
		r+=t;
		if (t>max)
		{
			max=t;
			strcpy(s1,s);
		}   
	}
    puts(s1);
    printf("%d\n%d\n",max,r);
	return 0; 
}