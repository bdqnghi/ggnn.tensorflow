int main( ){
        char str[256],zc[50],th[50];
		int i,j,t=0,n,m;
		gets(str);
		gets(zc);
		gets(th);
        n=strlen(zc);
		m=strlen(th);
		for(i=0;str[i]!='\0';i++){
			if(str[i]==zc[0]){
				for(j=1;j<n;j++){
					if(str[i+j]==zc[j]){
					   j++;
					   t=1;
					   continue;}
					else
						t=0;
						break;
				}
			}
			if(t){
				for(j=0;j<m;j++){
				str[i+j]=th[j];
				}
			
			   break;			
			}
		
		}

		puts(str);
     
        
       
        return 0;
}