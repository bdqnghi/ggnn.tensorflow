
int main(int argc, char* argv[])
{
	char a[80],b[80],p,q;
	gets(a);gets(b);
	int i;
	for(i=0;a[i]!='\0';i++){
		for(p='A',q='a';p<='Z';p++,q++){
			if(a[i]==p) a[i]=q;
			if(b[i]==p) b[i]=q;
		}
	}
	i=strcmp(a,b);
	if(i==0) printf("=\n");
	if(i<0) printf("<\n");
	if(i>0) printf(">\n");
	return 0;
}