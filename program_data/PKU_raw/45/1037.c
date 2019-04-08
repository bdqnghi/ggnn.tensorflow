int main()
{
	int i,j, k,n,m,a;
	char src[50],sub[50];
	scanf("%s%s",sub,src);
	m = (int)strlen(sub);
	n = (int)strlen(src);
	for (i=0; i<=n-m; i++) {
		j=0; k = i;
		while (j < m && src[k] == sub[j]) {
			j++; 
			k++;
		} 
		if (j == m){
			a=i;
			break;
		}
	}
	printf("%d\n",a);
	return 0;
}