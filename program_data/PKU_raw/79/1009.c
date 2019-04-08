
int main()
{
	int n[20]={0},m[20]={0};
	int k=0,hang;
	for(k=0;;k++){
		scanf("%d%d",&n[k],&m[k]);
		if(n[k]==0){
			hang=k;
			break;
		}
	}
	for(k=0;k<hang;k++){
	int i=0,jishu=0,ling=0;
	int a[300]={0};
	for(i=0;i<300;i++){
		if(i<=n[k])
			a[i]=i;
		else
			break;
	}
	for(i=0;;i++){
		if(a[i]!=0){
			jishu++;
			if(jishu==m[k]){
				ling++;
				jishu=0;
				a[i]=0;
			}
		}
		if(i==n[k]){
			i=0;
		}
		if(ling==(n[k]-1))
			break;
	}
	for(i=0;i<=n[k];i++){
		if(a[i]!=0)
			printf("%d\n",a[i]);
	}
	}
	return 0;
}