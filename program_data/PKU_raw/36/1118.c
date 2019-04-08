int main (){
	char a[20],b[20];
	char *p,*q;
	int *u,*v;
	cin>>a>>b;
	if(strlen(a)!=strlen(b))
	{
		cout<<"NO"<<endl;
		return 0;
	}
	int le1[52],le2[52];
	p=a;
	q=b;
	u=le1;
	v=le2;

	for(int i=0;i<52;i++)
		*(u+i)=*(v+i)=0;
	int len1=strlen(a);

	for(int i=0;i<len1;i++){
	if(*(p+i)>='a')
		(*(u+(*(p+i)-'a')))++;
	else (*(u+(*(p+i)-'A'+26)))++;
}
for(int i=0;i<len1;i++){
	if(*(q+i)>='a')
		(*(v+(*(q+i)-'a')))++;
	else (*(v+(*(q+i)-'A'+26)))++;
}
int j;
for( j=0;j<52;j++)
	if(*(u+j)!=*(v+j)){
		cout<<"NO"<<endl;
		return 0;
	}
cout<<"YES"<<endl;
return 0;
}