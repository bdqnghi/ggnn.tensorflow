struct Bo{
	int num;
	char auth[30];
}a[1010];


void main(){
	int n,i,j,maxnum=0,max;
	int zuozhe[26]={0};
	char out;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %s",&a[i].num,a[i].auth);
		for(j=0;j<=strlen(a[i].auth)-1;j++)
			zuozhe[a[i].auth[j]-'A']=zuozhe[a[i].auth[j]-'A']+1;
	}
	for(i=1;i<=25;i++)
		if(zuozhe[i]>zuozhe[maxnum]) maxnum=i;
	out='A'+maxnum;
	printf("%c\n",out);
	printf("%d\n",zuozhe[maxnum]);

	for(i=1;i<=n;i++)
	{
		if(strchr(a[i].auth,out)!=NULL) printf("%d\n",a[i].num);
	}
}





