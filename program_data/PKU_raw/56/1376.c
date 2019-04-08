int main()
{
	int i,j=0,a;
	char n[5],w[6];
	scanf("%s",n);
	a=(int)strlen(n);
	for(i=a-1;i>=0;i--){
	
			w[j]=n[i];
			j++;
	}
	w[j]=0;
	
    printf("%s",w);
	return 0;
}