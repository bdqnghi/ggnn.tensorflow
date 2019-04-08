char w[600][6];
char a[600][6];
char k[600];
char t[6];
int l,n;
int cmp(const void *a,const void *b){
	return strcmp((char *)a,(char *)b);
}
int main(){
	scanf("%d\n",&n);
	memset(k,0,sizeof(k));
	cin.getline(k,500,'\n');
	l=strlen(k);
	for(int i=0;i<l-n+1;i++)
		memcpy(&w[i],&k[i],sizeof(char)*n);
	qsort(w,l-n+1,6*sizeof(char),cmp);
	int d[500];
	memset(d,0,sizeof(d));
	d[0]=1;
	int m=1;
	for(int i=1;i<l-n+1;i++){
		d[i]=strcmp(w[i],w[i-1])?1:d[i-1]+1;
		m=max(m,d[i]);
	}
	if(m==1){
		cout<<"NO"<<endl;
		return 0;
	}
	int tt=0;
	for(int i=0;i<l-n+1;i++)if(m==d[i]){
		strcpy(a[tt],w[i]);
		tt++;
	}
	cout<<m<<endl;
	for(int i=0;i<l-n+1;i++){
		memcpy(&t,&k[i],sizeof(char)*n);
		for(int j=0;j<tt;j++)
			if(!strcmp(t,a[j])){cout<<t<<endl;a[j][0]=0;}
	}

	return 0;
}
