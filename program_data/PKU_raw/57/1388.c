char a[1000][256],b[1000][256];
int main(){	
	int len[1000],n=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&a[i]);
		len[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<len[i];j++){
			if(a[i][len[i]-1]=='r'&&a[i][len[i]-2]=='e'){
				a[i][len[i]-2]=0;
			}
			else if(a[i][len[i]-1]=='g'&&a[i][len[i]-2]=='n'&&a[i][len[i]-3]=='i'){
				a[i][len[i]-3]=0;
			}
			else if(a[i][len[i]-1]=='y'&&a[i][len[i]-2]=='l'){
				a[i][len[i]-2]=0;
			}
		}
	}
	for(i=0;i<n;i++){
			printf("%s\n",a[i]);
	}
	return 0;

}