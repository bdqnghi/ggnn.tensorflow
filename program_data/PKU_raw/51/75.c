int main(){
	char zfc[500];
	char ng[500][500];
	int sz[500];
	int imax[500];
	int ximax[500];
	int n,m,i,t,k,max,a,d,e;
	t=0;d=0;
	scanf("%d",&n);
	scanf("%s",&zfc);
	m=strlen(zfc);
	for(i=0;i<=m-n;i++){
		for(k=i;k<i+n;k++){
			ng[i][k-i]=zfc[k];
		}
	}
	for(i=0;i<m;i++){
		sz[i]=0;
	}
	for(i=1;i<=m-n;i++){
	  for(a=1;a<=i;a++){
		for(k=0;k<n;k++){
			if(ng[i][k]==ng[i-a][k]){d++;}
		}
       if(d==n){sz[i]++;}
	   d=0;
	  }
	}
	for(i=0;i<=m-n;i++){
		if(i==0){max=sz[i];}
		else if(sz[i]>max){max=sz[i];}
	}
	for(i=0;i<=m-n;i++){
		if(sz[i]==max){imax[t]=i;t=t+1;}
	}
    for(a=0;a<t;a++){ximax[a]=0;}
	d=0;
	for(i=0;i<=m-n;i++){
	  for(a=0;a<t;a++){
		for(k=0;k<n;k++){
			if(ng[i][k]==ng[imax[a]][k]){d++;}
		}
       if((d==n)&&(ximax[a]==0)){ximax[a]=i-1000;d=0;break;}
	   else{d=0;}
	  }
	}
	 for(a=0;a<t;a++){ximax[a]=ximax[a]+1000;}
	   for(a=0;a<t;a++){imax[a]=ximax[a];}
	for(k=1;k<=t;k++){
	for(i=0;i<t-k;i++){
			if(imax[i]>imax[i+1]){
					e=imax[i+1];
					imax[i+1]=imax[i];
					imax[i]=e;
			}
	}
}
	if(max<=0){printf("NO");}
	else{printf("%d\n",max+1);
	for(i=0;i<t;i++){
		for(k=0;k<n;k++){
			if(k==n-1){printf("%c\n",ng[imax[i]][k]);}
			else{printf("%c",ng[imax[i]][k]);}
		}
	}
	}
	return 0;
}

