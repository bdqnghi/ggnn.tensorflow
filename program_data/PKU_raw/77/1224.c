int judge(int s,char k[])
{
	int sum=0,p;
	for(int i=0;i<s;i++){
		if (k[i]==' '){
			sum++;}}
	if (sum==s)p=1;
	else p=0;
	return(p);
}
int main()
{
	int i=0;
	char kids[110],boy,gal;
	cin.getline(kids,110);
	for(i=0;i<strlen(kids);i++)
	    if (kids[i]!=kids[i+1]){
			boy=kids[i];
			gal=kids[i+1];
			break;}
	while(judge(strlen(kids),kids)!=1){
		if (kids[i]==boy&&kids[i+1]==gal){
			cout<<i<<" "<<i+1<<endl;
			kids[i]=' ';
			kids[i+1]=' ';
			i=0;}
		else if (kids[i]==' '&&kids[i+1]==gal){
			for(int j=i;j>=0;j--){
				if (kids[j]==boy){
					cout<<j<<" "<<i+1<<endl;
					kids[i+1]=' ';
					kids[j]=' ';
					i=0;
					break;}}}
		else i++;}					
	return 0;
}
		
	
