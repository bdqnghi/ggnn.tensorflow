
int main()
{
	int n,i,y,a,b,z[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int r[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},t,p[201],j;
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		scanf("%d%d%d",&y,&a,&b);
		
		p[i]=0;
		if ((y%4==0) && ( ((y%100)!=0) || ((y%400)==0) ) )
		{
			t=0;
			if (a>b) for(j=b;j<=(a-1);j++) t=t+r[j];
			if (a<b) for(j=a;j<=(b-1);j++) t=t+r[j];
			if ( (t%7)==0) p[i]=1;
			else p[i]=0;
		}
		
		else 
		{
			t=0;
			if (a>b) for(j=b;j<=(a-1);j++) t=t+z[j];
			if (a<b) for(j=a;j<=(b-1);j++) t=t+z[j];
			if ( (t%7)==0 ) p[i]=1;
			else p[i]=0;
		}
	}
	
	for (i=1;i<=n;i++)
		if(p[i]) printf("YES\n");
		else printf("NO\n");

}
