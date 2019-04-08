int main()
{
	int n,a[100],b[100],c[100],i,k;
	int d=0;
	int e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d %d",&(a[i]),&(b[i]));
	}
	for(i=0;i<n-1;i++){
		if((a[i]>=90&&a[i]<=140)&&(b[i]>=60&&b[i]<=90)){
			d++;
		}else{
			c[e]=d;
			e++;
			d=0;
		}
	}
	if((a[n-1]>=90&&a[n-1]<=140)&&(b[n-1]>=60&&b[n-1]<=90)){
		d++;
		c[e]=d;
		e++;
	}else{
        c[e]=d;
		e++;
	}
	for(i=1;i<=e;i++){
		for(k=0;k<e-i;k++){
			if(c[k]<c[k+1]){
				d=c[k+1];
                c[k+1]=c[k];
				c[k]=d;
			}
		}
	}
	printf("%d",c[0]);
	return 0;
}

