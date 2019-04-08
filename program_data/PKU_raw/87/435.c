int main()
{
	int a[1000][6],i,j,k=0,l=0;
	int AM,PM,T;
	for(i=0;i<10;i++){
		for(j=0;j<6;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<100;i++){
		for(j=0;j<6;j++){
			if(a[i][j]==0){
				k++;
			}
		}
		if(k!=6){
			l++;
		}
		k=0;
	}
	for(i=0;i<l;i++){
		AM=(a[i][0]*3600)+(a[i][1]*60)+(a[i][2]);
		PM=(a[i][3]*3600)+(a[i][4]*60)+(a[i][5])+43200;
	    T=PM-AM;
	    printf("%d\n",T);
	}
	return 0;
}