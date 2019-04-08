int main(){
char s[256],a[256],b[256];
int x,y,z,k,l,i,j,m,n,cha,mark=0;

gets(s);
scanf("%s",a);
scanf("%s",b);
x=strlen(a);
y=strlen(b);
z=strlen(s);

for(i=0;i<z;i++){
	if(s[i]==a[0]){
		for(j=0;j<x;j++){
			if((s[i+j]==a[j])&&(j!=x-1)){
	           continue;}
			else if(s[i+j]!=a[j]){break;}
			else if((s[i+j]==a[j])&&(j==x-1)){
				mark++;
				    if(x>y){
						for(k=0;k<y;k++){
							s[i+k]=b[k];
						}
						cha=x-y;
						for(m=i+x;m<z;m++){
						s[m-cha]=s[m];
						}
                        s[z-cha]='\0';
					}
					else if(x==y){//??=?==	
						for(k=0;k<y;k++){
					        s[i+k]=b[k];
						}
					}
					else if(x<y){
						cha=y-x;
						for(l=z-1;l>=i+x;l--){
						s[l+cha]=s[l];
						}
						for(n=0;n<y;n++){
						s[i+n]=b[n];}
						s[z+cha]='\0';
						z=strlen(s);//??????s?????????z???????
					}
			}
		}
	}
		if(mark!=0){
	           printf("%s",s);
	           return 0;
		}
	
}
if(mark==0){
printf("%s",s);
}

return 0;
}

