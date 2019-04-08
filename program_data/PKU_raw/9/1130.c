int main()
{
	int n,i,j,a[100],e;
	char s[100][100],str[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",s[i],&a[i]);
	}
	for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			if(a[i]>=60&&a[i+1]>=60){
				if(a[i]>=a[i+1]){
					continue;
				}
				if(a[i]<a[i+1]){
					strcpy(str,s[i+1]);
					strcpy(s[i+1],s[i]);
strcpy(s[i],str);
					e=a[i+1];
					a[i+1]=a[i];
					a[i]=e;
				}
			}
			if(a[i]>=60&&a[i+1]<60){
				continue;
			}
			if(a[i]<60&&a[i+1]>=60){
			    strcpy(str,s[i+1]);
				strcpy(s[i+1],s[i]);
			    strcpy(s[i],str);
				e=a[i+1];
				a[i+1]=a[i];
				a[i]=e;
			}
			if(a[i]<60&&a[i+1]<60){
				continue;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
	return 0;
}
