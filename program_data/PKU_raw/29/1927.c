int main()
{
	int m,n[100],i,p;
	float a,s[100],b;
	scanf("%d",&m);
	for(i=1;i<m;i++){
		scanf("%d\n",&n[i]);}
	scanf("%d",&n[m]);
	
	for(i=1;i<=m;i++){
		if(n[i]==0)printf("0");
		else 
			for(p=1,a=2.0,b=0;p<=n[i];p++){
				b=b+a;a=1+1.0/a;
			s[i]=b;}
	}
    for(i=1;i<=m;i++){printf("%.3f\n",s[i]);}}
