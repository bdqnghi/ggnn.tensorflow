int main()
{
	char a[NUM],b[200][50]={'\0'};
	char *max,*min;
	int m,n,i,t,j;
	gets(a);
	j=strlen(a);
	t=0;
	n=0;
	for(m=0;m<j;m++){
		if((a[m]!=' '&&a[m]!='\0')&&a[m]!=','){
		    b[n][t]=a[m];
		    t++;
		}
		else{
			n++;
			t=0;
		}
	}
	max=b[0];
	min=b[0];
	for(i=1;i<n+1;i++){
		if(strlen(max)<strlen(b[i])){
			max=b[i];
		}
		if(strlen(min)>strlen(b[i])&&(strlen(b[i])!=0)){
			min=b[i];
		}
	}
	puts(max);
	puts(min);
	return 0;
}
