void main()
{
	int i,j,l,ll,ll2;
	char a[100];
	char aa[100];
	char bb[100];
	char h[100][100];
	int c[100];
	for(i=0;i<100;i++){
		c[i]=0;
	}
	gets(a);
	gets(aa);
	gets(bb);
	l=strlen(a);
	ll=strlen(aa);
	ll2=strlen(bb);
	int n=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			n=n+1;
		}
	}
	int b[50];
	for(i=0;i<n;i++){
		for(j=0;a[j]!='\0';j++){
			if(a[j]==' '&&c[j]==0){
				b[i]=j;
				c[j]=1;
				break;
			}
		}
	}
	int d[50];
	d[0]=b[0];
	for(i=1;i<n;i++){
		d[i]=b[i]-b[i-1]-1;
	}
	d[n]=l-b[n-1]-1;
	for(i=1;i<n;i++){
		for(j=b[i-1]+1;j<b[i];j++){
			h[i][j-b[i-1]-1]=a[j];
		}
	}
	for(j=0;j<b[0];j++){
		h[0][j]=a[j];
	}
	for(j=b[n-1]+1;j<l;j++){
		h[n][j-b[n-1]-1]=a[j];
	}
	for(i=0;i<=n;i++){
		if(d[i]==ll){
			int t=0;
			for(j=0;j<d[i];j++){
				if(h[i][j]==aa[j]){
					t=t+1;
				}
			}
			if(t==d[i]){
				d[i]=ll2;
				for(j=0;j<ll2;j++){
					h[i][j]=bb[j];
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<d[i];j++){
			if(j!=d[i]-1){
		printf("%c",h[i][j]);
			}
			else if(j==d[i]-1){
				printf("%c ",h[i][j]);
			}
		}

	}
	for(j=0;j<d[n];j++){
			if(j!=d[n]-1){
		printf("%c",h[n][j]);
			}
			else if(j==d[i]-1){
				printf("%c\n",h[n][j]);
			}
		}
}
	




				
			
		
	

	
