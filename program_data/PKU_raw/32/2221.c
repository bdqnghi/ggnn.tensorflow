
char *minus(char *a,char *b)
{
	char *c;
	int m,n;
	int i=0,j=0,k=0;
	m=strlen(a);
	n=strlen(b);
	c=(char *)malloc(sizeof(char)*N);
	k=N-1;
	c[k]=0;
	k--;
	i=m-1;
	for(j=n-1;j>=0;j--){
		if(a[i]>=b[j]){
			c[k]=a[i]-b[j]+'0';
		}
		else{
			c[k]=a[i]-b[j]+10+'0';
			a[i-1]=a[i-1]-1;
		}
		k--;
		i--;
	}
	while(i>=0){
		c[k]=a[i];
		k--;
		i--;
	}
	return c+k+1;

}

void main()
{
	char **s1,**s2,**s3;
	int n=0,i=0;
	scanf("%d",&n);
	s1=(char **)malloc(sizeof(char *)*n);
	s2=(char **)malloc(sizeof(char *)*n);
	s3=(char **)malloc(sizeof(char *)*n);
	while(i<n){
		s1[i]=(char *)malloc(sizeof(char)*N);
		s2[i]=(char *)malloc(sizeof(char)*N);
		scanf("%s",s1[i]);
		scanf("%s",s2[i]);
		printf("\n");
		s3[i]=minus(s1[i],s2[i]);
		i++;
	}
	for(i=0;i<n;i++){
		puts(s3[i]);
	}

}