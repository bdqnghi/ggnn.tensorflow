int main(){
	char s[101],a[101],b[101];
    gets(s);
    gets(a);
    gets(b);
    int i,j,c=0,d=0,e=0,f,k,l,len1,len2;
    len1=strlen(s);
    len2=strlen(a);
    for(i=0;i<len1;i++){
		if(s[i]==a[0]&&(s[i-1]==' '||i==0)){
			d=0;
			for(j=1;j<len2;j++){
				if(s[j+i]==a[j])
				d+=1;
			}
		    
		    if(d==len2-1){
				e+=1;
			    s[i]='\0';
			    f=0;
			    for(k=0;k<i;k++){
					if(s[k]=='\0')
						f+=1;
					if(f==e-1){
						if(k==0){
					    for(l=k;l<i;l++)
							printf("%c",s[l]);
					     break;
						}
						else{
						for(l=k+len2;l<i;l++)
							printf("%c",s[l]);
					     break;
						}	
							
			        }
				}
				printf("%s",b);
	        }		   
		}
	}
	if(e!=0){
	for(i=0;i<len1;i++){
		if(s[i]=='\0')
		c+=1;
		if(c==e){
			for(j=i+len2;j<len1;j++)
			printf("%c",s[j]);
			break;
		}
	}
    }
    else
    puts(s);
				



	
	
	
	    
				return 0;
	}


