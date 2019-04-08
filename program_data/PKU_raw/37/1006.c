int main()
{
    int n,i,j,k,l,b,c;
	char a;
	char *s=(char *)malloc(sizeof(char)*100000);
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%s",s);
		l=strlen(s);
		c=0;
		for(j=0;j<l;j++){
            a=*(s+j);
			b=0;
			for(k=0;k<l;k++){
				if(k!=j&&*(s+k)==a) {b++; break;}
			}
			if(b==0){
			    printf("%c\n",a);
				c++;
				break;
			}
		}
		if(c==0) printf("no\n");        
	}
    return 0;
}