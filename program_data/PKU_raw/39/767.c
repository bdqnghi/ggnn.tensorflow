int main()
{
	int i,n,smax=0;
	struct s{
		char name[21];
		int qimo;
		int banji;
		char bangan;
		char xibu;
		int lunwen;
		int sum;}s[101];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s[i].sum=0;
		scanf("%s %d %d %c %c %d",s[i].name,&s[i].qimo,&s[i].banji,&s[i].bangan,&s[i].xibu,&s[i].lunwen);
	}
		for(i=0;i<n;i++){
		if((s[i].qimo>80)&&(s[i].lunwen>0))
			s[i].sum=s[i].sum+8000;
        if((s[i].qimo>85)&&(s[i].banji>80))
			s[i].sum=s[i].sum+4000;
        if(s[i].qimo>90)
			s[i].sum=s[i].sum+2000;
	    if((s[i].qimo>85)&&(s[i].xibu=='Y'))
			s[i].sum=s[i].sum+1000;
        if((s[i].banji>80)&&(s[i].bangan=='Y'))
			s[i].sum=s[i].sum+850;}
		for(i=0;i<n;i++)
		{smax+=s[i].sum;
			if(s[i].sum>s[0].sum){
				s[0].sum=s[i].sum;
			s[0]=s[i];	}
		}
		printf("%s\n",s[0].name);
		printf("%d\n",s[0].sum);
		printf("%d",smax);
		return 0;
	}
