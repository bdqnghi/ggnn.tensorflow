int main(){
	int n[300],m[3000],i,s[300],p,x;
	for(x=0;x<300;x++){
		s[x]=0;
		}
	for(p=0;;p++){
		scanf("%d%d",&n[p],&m[p]);
		if(n[p]!=0 && m[p]!=0){
	         for(i=2;i<=n[p];i++){
		        s[p]=(s[p]+m[p])%i;}
			    printf("%d\n",s[p]+1);
			}
		else{
			break;
			}
		}
	return 0;
}
