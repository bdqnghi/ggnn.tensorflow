void main()
{
	int n,i,s1[100],s2[100],e[100],s[100]={0},all[100]={0},sum=0;
      char name[100][30],g[100],w[100];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int R[5]={0};
		scanf("%s %d %d %c %c %d",name[i],&s1[i],&s2[i],&g[i],&w[i],&e[i]);
if ((s1[i]>80)&&(e[i]>=1)) 
R[0]= 8000;		
if ((s1[i]>85)&&(s2[i]>80)) 
R[1]= 4000;
	if (s1[i]>90)
R[2]= 2000;

if ((s1[i]>85)&&(w[i]=='Y'))
R[3]= 1000;

if ((s2[i]>80)&&(g[i]=='Y'))
R[4]= 850;

		all[i]=R[0]+R[1]+R[2]+R[3]+R[4];
	}
	int r=0,max=all[0];
	for(i=0;i<n;i++)
	{
		sum+=all[i];
		if(all[i]>max)
		{
			max=all[i];
			r=i;
		}
	}
	printf("%s\n%d\n%d\n",name[r],all[r],sum);
}
