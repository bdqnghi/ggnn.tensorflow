int main()
{
 	char s[50],w[50];
 	int i,k,ls,lw,a,m=0,x=0;
 	scanf("%s %s",s,w);
 	ls=strlen(s);
 	lw=strlen(w);
 	for(i=0;i<lw;i++){
		if(w[i]==s[0]){
			a=i;
			for(k=0;k<ls;k++){
				if(w[i+k]!=s[k]){
					m=1;
					break;
					}
				}
			if(m==0){
				x=1;
				break;
				}
			}
		}
	if(x==1) printf("%d",a);
 	
    return 0;
}