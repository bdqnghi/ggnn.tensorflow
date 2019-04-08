int main(int argc, char* argv[])
{
	char a[255],b[255];
	int n,i;
	int a1,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%s",a);
		a1=strlen(a);
		for(j=0;j<a1;j++){
			switch(a[j]){
			case 'A':b[j]='T';break;
			case 'T':b[j]='A';break;
			case 'C':b[j]='G';break;
			case 'G':b[j]='C';break;
			}
		    printf("%c",b[j]);
		}
		printf("\n");
	}

    return 0;
}