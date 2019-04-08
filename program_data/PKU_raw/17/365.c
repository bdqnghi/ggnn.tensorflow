
int main(){
  while(!cin.eof()){
    char str[MAX],ans[MAX];
    memset(str,0,sizeof(str));
    memset(ans,0,sizeof(ans));
    cin>>str;
    
    for(int i=0;i<strlen(str);i++) ans[i]=' ';
    
    int sign=0;
    for(int i=0;i<strlen(str);i++){
      if(str[i]=='('){
      
	sign++;
	ans[i]=sign+'0';
      }
      else if(str[i]==')'){
	if(sign>0){
	  ans[i]=sign+'0';
	  sign--;
	}
	else ans[i]='?';
      }
    }
    for(int i=0;i<strlen(str);i++){
      if(ans[i]!=' '&&str[i]=='('){
	int ok=0;
	int j;
	for(j=i+1;j<strlen(str);j++){
	  if(ans[j]==ans[i]){
	    ok=1;
	    break;
	  }
	}
	if(!ok) ans[i]='$';
	else ans[i]=ans[j]=' ';
      }
    }
    ans[strlen(str)]='\0';
    cout<<str<<endl;
    cout<<ans;
    cout<<endl;
  }
  return 0;
}
