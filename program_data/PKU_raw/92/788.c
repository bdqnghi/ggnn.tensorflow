int tian[1010],qi[1010],n;
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int i,j,k=0,headt,tailt,headq,tailq,ans;
	while(in(n) && n)
	{
		ans=0;
		headt=headq=0; tailt=tailq=n;
		for(i=0;i<n;i++) in(tian[i]);
		for(i=0;i<n;i++) in(qi[i]);
		sort(tian,tian+n);
		sort(qi,qi+n);
		while(headt!=tailt)
		{
			if(tian[headt]<qi[headq]) { ans--; headt++; tailq--; continue; }
			if(tian[headt]>qi[headq]) { ans++; headt++; headq++; continue; }
			if(tian[tailt-1]>qi[tailq-1]) { ans++; tailt--; tailq--; continue; }
			if(tian[tailt-1]<qi[tailq-1]) { ans--; headt++; tailq--; continue; }
			if(tian[headt]<qi[tailq-1]) ans--; headt++; tailq--;
		}
		printf("%d\n",ans*200);
	}
}