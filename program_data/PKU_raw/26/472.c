int main(){
	int i,j=0;
	char str[101],c[101]="\0";
	cin.getline(str,101);
	for(i=0;i<=strlen(str);i++)
		if (!(str[i]==' '&& str[i+1]==' ')){
			c[j]=str[i];
			j++;
		}
	cout<<c;
	return 0;
}