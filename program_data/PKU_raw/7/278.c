int main()
{
    char w[256],s[256],ti[256];
    gets(w);
	gets(s);
	gets(ti);
    int len1,len2,len;
    len=strlen(w);
    len1=strlen(s);
    len2=strlen(ti);
	int i,k,n=0,m=0;
    for(i=0;i<len;i++){
		if(w[i]==s[0]){
			for(k=1;k<len1;k++){
				if(w[i+k]==s[k]){
					n++;
                }
			}
			if(n==len1-1){
				m=i;
			}
		}
	}
    if(m==0){
		puts(w);
	}else{
	   for(i=0;i<m;i++){
           printf("%c",w[i]);
	   }
	   for(i=0;i<len2;i++){
	        printf("%c",ti[i]);
	   }
	   for(i=m+len1;i<len;i++){
            printf("%c",w[i]);
	   }
	}
return 0;
}

