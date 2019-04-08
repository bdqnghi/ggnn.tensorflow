int main (){
	char a[20],b[20];
	cin>>a>>b;
	if(strlen(a)!=strlen(b))
	{
		cout<<"NO"<<endl;
		return 0;
	}
	int le1[52],le2[52];
	for(int i=0;i<52;i++)
		le1[i]=le2[i]=0;
	int len1=strlen(a);

for(int i=0;i<len1;i++){
	if(a[i]>='a')
		le1[a[i]-'a']++;
	else le1[a[i]-'A'+26]++;
}
for(int i=0;i<len1;i++){
	if(b[i]>='a')
		le2[b[i]-'a']++;
	else le2[b[i]-'A'+26]++;
}
int j;
for( j=0;j<52;j++)
	if(le1[j]!=le2[j]){
		cout<<"NO"<<endl;
		return 0;
	}

	cout<<"YES"<<endl;
return 0;




}