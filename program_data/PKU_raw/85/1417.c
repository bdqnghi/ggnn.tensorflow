
int main(){
int n,i,j,m=1;
char s[MAX+1];
scanf("%d",&n);
for(j=0;j<n;j++){
scanf("%s",s);

  for(i=0;s[i]!='\0';i++){
		if(!((s[i]=='_')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'&&i>0))){
		m=0;
		break;
		}
		else{
			m=1;
		}
			
		}
  if(m==0){
				printf("no\n");
			}
			else if(m==1){
			printf("yes\n");
			}
}
return 0;
}


	
		


	
		

