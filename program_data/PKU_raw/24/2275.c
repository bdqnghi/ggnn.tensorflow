int main()
{
	int max=0,min=100,i,j,m,n,word=0;
	char a[5000],c,maxw[20],minw[20];
	gets(a);
	for(i=0;(c=a[i])!='\0';i++){
		if(a[i]!=' '&&a[i]!=','){
			word++;}
		else if((a[i]==' '||a[i]==',')&&(a[i+1]==' '||a[i+1]==',')){
			i++;}
		else{
			if(word>max){
			max=word;
			m=i;}
		if(word<min){
			min=word;
			n=i;}
		word=0;}
	}if(word>max){
		max=word;
		m=i;}
	if(word<min){
		min=word;
		n=i;}
		for(i=(m-max);i<m;i++){
		printf("%c",a[i]);}
	printf("\n");
	for(j=(n-min);j<n;j++){
		printf("%c",a[j]);}
	return 0;
}