int main (){
	int k,m,n,a,b,c,d;
	c=0;
	scanf("%d",&k);
	int sz[100][100];
	int yi[100];
	int er[100];
	for(c=0;c<k;c++){
        scanf("%d%d",&m,&n);
	for(a=0;a<m;a++){
		for(b=0;b<n;b++){
			scanf("%d",&sz[a][b]);
		}
	}
        d=0;
		for(b=0;b<n;b++){
			d+=sz[0][b];
		}
		yi[a]=d;
		d=0;
	    for(b=0;b<n;b++){
			d+=sz[m-1][b];
		}
		er[a]=d;
	    d=yi[a]+er[a];
		for(b=1;b<=(m-2);b++){
	        d+=sz[b][0];
		}
		for(b=1;b<=(m-2);b++){
            d+=sz[b][n-1];
		}

		printf("%d\n",d);
		
	}
	return 0;
}
