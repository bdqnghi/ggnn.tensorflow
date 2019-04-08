int main(){
	int i,j,n,k;
	char sz[300];
	char cz[53]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	scanf("%s",sz);
	n=strlen(sz);

	for(j=0;j<52;j++)
	{
		k=0;
		{
			for(i=0;i<n;i++)
				if(cz[j]==sz[i]) k++;
		}		
		if(k>0) printf("%c=%d\n",cz[j],k);
		
	}
	for(i=0,k=0;i<n;i++)
		if(sz[i]<65||sz[i]>123) k++;
		if(k==n) printf("No\n");			
       return 0;
}

