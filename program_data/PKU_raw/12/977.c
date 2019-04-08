int main ()
{
	int n=0,i,j,k,m=0;
	int a[16];
    while (1){
    n=0;
	for (i=0;i<16;i++){
		scanf("%d",&a[i]);
		m=i;
		if (a[i]==0) break;
		if (a[0]==-1) break;
	}
	if (a[0]==-1) break;
	for (j=0;j<m;j++){
		for (k=0;k<m;k++){
			if (a[j]==2*a[k]||a[k]==2*a[j])
				n+=1;
		}
	}
	printf("%d\n",n/2);
	}
	return 0;
}

