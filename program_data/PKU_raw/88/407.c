
int main()
{
	char a[31];
	int i,len;
	cin.getline(a,31);
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]>=48&&a[i]<=57){
			cout<<a[i];
			if(a[i+1]<48||a[i+1]>57){
				cout<<endl;
			}
		}
	}
	return 0;
}

