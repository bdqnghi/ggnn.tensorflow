
void main()
{
	struct student{
		char name[21];
		int fin;
		int cls;
		char off;
		char wst;
		int pap;
	}s[100];
	int n,i,m[100]={0},sum=0,max,maxi;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",s[i].name,&s[i].fin,&s[i].cls,&s[i].off,&s[i].wst,&s[i].pap);
	
	for(i=0;i<n;i++){
		if(s[i].fin>80&&s[i].pap>=1)
			m[i]+=8000;
		if(s[i].fin>85&&s[i].cls>80)
			m[i]+=4000;
		if(s[i].fin>90)
			m[i]+=2000;
		if(s[i].fin>85&&s[i].wst=='Y')
			m[i]+=1000;
		if(s[i].cls>80&&s[i].off=='Y')
			m[i]+=850;
		sum+=m[i];
		if(i==0){
			max=m[i];
			maxi=i;
		}
		else if(m[i]>max){
			max=m[i];
			maxi=i;
		}
	}

	printf("%s\n%d\n%d\n",s[maxi].name,m[maxi],sum);
}