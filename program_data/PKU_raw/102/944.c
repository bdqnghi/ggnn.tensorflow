int main(){
	int n,a=0,b=0,k,j;
	double m[40],f[40];
	struct ren
	{
		char s[10];
		double h;
	}r[40];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s%lf",r[i].s,&r[i].h);
		if(strcmp(r[i].s,"male")==0)
		{
			m[a]=r[i].h;
			a++;
		}
		if(strcmp(r[i].s,"female")==0)
		{
			f[b]=r[i].h;
			b++;
		}
	}
	for( k = 1; k <= a; k++){
		double e;
		for(int i = 0; i < a - k; i++){
			if(m[i] > m[i+1]){
				e = m[i+1];
				m[i+1] = m[i];
				m[i] = e;
			}
		}

	}
	for( k = 1; k <= b; k++){
		double e;
		for(int i = 0; i < b - k; i++){
			if(f[i] > f[i+1]){
				e = f[i+1];
				f[i+1] = f[i];
				f[i] = e;
			}
		}

	}
	printf("%.2lf",m[0]);
	for( j=1;j<a;j++)
	{
		printf(" %.2lf",m[j]);
	}
	for( j=b-1;j>=0;j--)
	{
		printf(" %.2lf",f[j]);
	}
	return 0;
}

