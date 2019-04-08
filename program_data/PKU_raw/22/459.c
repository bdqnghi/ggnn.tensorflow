int main(){
	int i=0,j,k;
	int n,o;
	int d;
	char a[10000];
	int b[10000];
	b[0]=0;
	char c='0';
	for(i=0;i<10000;i++){
		scanf("%c",&a[i]);
		if (a[i]==10)
		{
			break;
		}
	}
	for(j=0,k=0;j<i;j++){
		if(a[j]>='0'&&a[j]<='9')
			b[k]=b[k]*10+(a[j]-c);
		if(a[j]==','){
			k++;
			b[k]=0;
		}
	}
	for(o=0;o<k;o++){
		for(n=0;n<k;n++)
			if(b[n]<=b[n+1]){
				d=b[n];
				b[n]=b[n+1];
				b[n+1]=d;
			}
	}
	for(j=0;j<k;j++){
		if(b[j]>b[j+1]){
			printf("%d",b[j+1]);
			return 0;
		}

		
	}
	if(j=k||k==0)printf("No");

	return 0;
}