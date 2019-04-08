int main()
{
	int n,i,a,b,c,j[100],j1[100],sum=0;
	char m,l,s[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		j[i]=0;
		scanf("%s %d %d %c %c %d",s[i],&a,&b,&m,&l,&c);
		if(a>80&&c>=1){
			j[i]=j[i]+8000;
		}
		if(a>85&&b>80){
			j[i]=j[i]+4000;
		}
		if(a>90){
			j[i]=j[i]+2000;
		}
		if(l=='Y'&&a>85){
			j[i]=j[i]+1000;
		}
		if(m=='Y'&&b>80){
			j[i]=j[i]+850;
		}
	}
	for(i=0;i<n;i++){
		sum=sum+j[i];
		j1[i]=j[i];
	}
	for(i=0;i<n;i++){
		if(j[i]>j[i+1])
			j[i+1]=j[i];
	}
	for(i=0;i<n;i++){
		if(j1[i]==j[n-1])
		{
			printf("%s\n",s[i]);
		printf("%d\n",j[n-1]);
		break;
		}
	}
		printf("%d\n",sum);
		return 0;
}






