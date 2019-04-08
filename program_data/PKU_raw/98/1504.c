int main()
{
	char str[500][41]={'\0'},s[500][81]={'\0'};
	int i,j=0,k,n,l[500]={0},len[500]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
		l[i]=strlen(str[i]);
	}
	for(i=0;i<l[0];i++)
		s[0][i]=str[0][i];
	len[0]=l[0];
	for(i=1;i<n;i++){
		if(len[j]+l[i]<=79){
			s[j][len[j]]=' ';
			for(k=len[j]+1;k<=len[j]+l[i];k++)
				s[j][k]=str[i][k-len[j]-1];
			len[j]+=l[i]+1;
		}
		else {
			j++;
			for(k=0;k<l[i];k++)
				s[j][k]=str[i][k];
			len[j]=l[i];
		}
	}
	for(i=0;i<j+1;i++)
		printf("%s\n",s[i]);
	return 0;
}