
int tt[2000],qq[2000],n;
int main()
{
	int i,j,k=0,headt,tailt,headq,tailq,ans;
	while(scanf("%d",&n) && n)
	{
		ans=0;
		headt=headq=0; tailt=tailq=n;
		for(i=0;i<n;i++) scanf("%d",&tt[i]);
		for(i=0;i<n;i++) scanf("%d",&qq[i]);
		sort(tt,tt+n);
		sort(qq,qq+n);
		while(headt!=tailt)
		{
			if(tt[headt]<qq[headq]) { ans--; headt++; tailq--; continue; }
			if(tt[headt]>qq[headq]) { ans++; headt++; headq++; continue; }
			if(tt[tailt-1]>qq[tailq-1]) { ans++; tailt--; tailq--; continue; }
			if(tt[tailt-1]<qq[tailq-1]) { ans--; headt++; tailq--; continue; }
			if(tt[headt]<qq[tailq-1]) ans--; headt++; tailq--;
		}
		printf("%d\n",ans*200);
	}
}