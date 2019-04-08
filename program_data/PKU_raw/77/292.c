int main(){
	char x,y;
	char a[1000];
	int b[1000];
	int i = 0;
	int m,n;
	char da;
	int db;
	int k;
	int jie1=0,jie2=0;

	while(scanf("%c",&a[i]) != EOF){
		x=a[0];
		if(a[i] == x&&jie1==0){
			i++;
			jie1=1;
			continue;
		}
		if(a[i]!=x&&jie2==0){
			y=a[i];
			jie2=1;
			i++;
			continue;
		}
		if(a[i]==x || a[i]==y){
			i++;
		}
		else break;
	}
	for(k=0;k<1000;k++){
		b[k] = k;
	}
	while(i!=0){
		for(m = 0;m < i-1;m++)
			if(a[m] == x && a[m+1] == y){
				i = i-2;
				printf("%d %d\n",b[m],b[m+1]);
				for(n=m;n<i;n++){
					da=a[n+2];
					a[n]=da;
					db=b[n+2];
					b[n]=db;
				}
				break;
			}
	}
	return 0;
}
