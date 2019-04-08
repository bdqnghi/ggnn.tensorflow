char a[35];
int main()
{
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(isdigit(a[i])!=0){
			if(isdigit(a[i+1])!=0)
				cout<<a[i];
			else
				cout<<a[i]<<endl;
		}
	}
	
	
}