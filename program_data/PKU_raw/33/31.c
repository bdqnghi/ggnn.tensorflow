struct DNA{
	char zfc[255];
}a[1000];
int main()
{
	int n,i,j,t;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	gets(a[i].zfc);   
		t=strlen(a[i].zfc);
		for(j=0;j<t;j++){
			if(a[i].zfc[j]=='A')
				a[i].zfc[j]='T';
	        else if(a[i].zfc[j]=='T')
		        a[i].zfc[j]='A';
	        else if(a[i].zfc[j]=='C')
		        a[i].zfc[j]='G';
	        else if(a[i].zfc[j]=='G')
		        a[i].zfc[j]='C';
		}
		puts(a[i].zfc);   
	}
    return 0;
}