
int main(int argc, char* argv[])
{
	int n,a[1000];
	int i,j,k,o=0,p=1;
	double b=1,c=2,w=3,s[100],y=0,e[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	do{
		s[o]=1;
		o++;
	}
	while(o==0);
	do{
		s[p]=2;
		p++;
	}
	while(p==1);
	for(i=0;i<100;i++){
		e[i]=0;
	}
	for(k=2;k<100;k++){
		s[k]=s[k-1]+s[k-2];
	}
	for(i=0;i<n;i++){
		if(a[i]==1){
			printf("%.3lf\n",(double)c/b);
		}
		if(a[i]==2){
			e[i]=c/b+w/c;
			printf("%.3lf\n",e[i]);
		}
		if(a[i]>2){
			for(j=0;j<a[i];j++){
				e[i]+=s[j+1]/s[j];
			}
			printf("%.3lf\n",e[i]);
		}
	}
	return 0;
}
