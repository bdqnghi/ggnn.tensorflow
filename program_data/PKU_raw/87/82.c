int main(){
	int a[100][15],i,k,n,p[100],q[100],t[100];
	for(n=0;1;n++){	
		for(i=0;i<6;i++){
		    scanf("%d",&a[n][i]);
	    }
	    k=0;
	    for(i=0;i<6;i++){
			if(a[n][i]==0){
				k++;
			}
		}
		if(k==6){
			break;
		}
	}
	for(i=0;i<n;i++){	
		p[i]=a[i][0]*3600+a[i][1]*60+a[i][2];
	    q[i]=a[i][3]*3600+a[i][4]*60+a[i][5]+12*3600;
	    t[i]=q[i]-p[i];
	}
	for(i=0;i<n-1;i++){	
		printf("%d\n",t[i]);
	}
	printf("%d",t[n-1]);
	//scanf("%d",&n);
    return 0; 
}