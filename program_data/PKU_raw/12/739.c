int main() {
	int a[20],s=0;
	while (scanf("%d",&a[++s])!=EOF) {
		if (a[1]==-1) break;
		do scanf("%d",&a[++s]); while (a[s]!=0);
		s--;
		int ans=0;
		for (int i=1;i<=s;i++)
			for (int j=1;j<=s;j++)
				if (a[i]*2==a[j])
					ans++;
		printf("%d\n",ans);
		s=0;
	
	}
    return 0;
}