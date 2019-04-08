int main(){
	char line[1000],label[1000];
	int pos[1000];
	int len,i;
	while(cin.getline(line,1000)){
		int left=0,right=0,s=-1;
		len=strlen(line);
		for(i=0;i<1000;i++)
			label[i]=' ';
		for(i=0;line[i]!='\0';i++)
		{
			if(line[i]=='(')
			{
				pos[++s]=i;left++;
			}
			if(line[i]==')'){
				if(left<=right)
					label[i]='?';
				else{
					right++; s--;
				}
			}
		}
		if(s>=0){
			for(i=0;i<=s;i++)
				label[pos[i]]='$';
		}
		label[len]='\0';
		cout<<line<<endl;
		cout<<label<<endl;
	}
	return 0;
}
