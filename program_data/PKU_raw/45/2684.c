









int main()
{
	int i,j,m,n,len1,len2,c=0,d;
	char s[50],w[50],a[50]={0};
	scanf("%s%s",s,w);
	len1=strlen(s);
	len2=strlen(w);
	for(j=0,i=0;j<len2;j++){
		c=0;
		if(s[i]==w[j]){
			for(m=i+1,n=j+1;m<len1;m++,n++){
				if(s[m]!=w[n]){
					c=1;
				}
			}
				if(c!=1){
					d=j;
				        break;
			
		}
	}
	}
	printf("%d",d);
	return 0;
}
