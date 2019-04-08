
int main(int argc, char* argv[])
{   int n,c[100],d[100],e[100],i,j=0,z,jin[100],max=0;
    char s[100][50];
	char a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d%d %c %c%d",s[i],&c[i],&d[i],&a[i],&b[i],&e[i]);}
    for(i=0;i<n;i++){
    jin[i]=0;
		if(c[i]>80&&e[i]>=1){jin[i]=jin[i]+8000;}
        if(c[i]>85&&d[i]>80){jin[i]=jin[i]+4000;}
        if(c[i]>90){jin[i]=jin[i]+2000;}
        if(c[i]>85&&b[i]=='Y'){jin[i]=jin[i]+1000;}
	    if(d[i]>80&&a[i]=='Y'){jin[i]=jin[i]+850;}
	    
	}
	j=0;
	for(i=0;i<n;i++){
			j=j+jin[i];}
	
	for(i=0;i<n;i++){
		if(jin[i]>max){max=jin[i];z=i;}}
	

	printf("%s\n%d\n%d\n",s[z],max,j);
	return 0;
}
