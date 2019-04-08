int aLoop[MAX_NUM+10];
main()
{
	int n,m,i;
	while(1){
		scanf("%d%d",&n,&m);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			aLoop[i]=i+1;
		int nPtr=0;
		for(i=0;i<n;i++){

			int nCounted=0;
			while(nCounted<m){
				while(aLoop[nPtr]==0)
					nPtr=(nPtr+1)%n;
				nCounted++;
				nPtr=(nPtr+1)%n;
			}
			nPtr--;
			if(nPtr<0)
				nPtr=n-1;
			if(i==n-1)
				printf("%d\n",aLoop[nPtr]);
			aLoop[nPtr]=0;
		}
	}
}
