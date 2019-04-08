int num[101]={0};                                     //?????????,(??????)???????????

void lashou(char *str)
{
	int i,j,len;
	len=strlen(str);
	if(len==2){
		cout<<num[0]<<' '<<num[1];
		return;
	}
	for(i=0;str[i+1]!='\0';i++){
		if(str[i]==str[0] && str[i+1]!=str[i]){       //????????,???????????
			cout<<num[i]<<' '<<num[i+1]<<endl;        //????
			for(j=i+2;str[j]!='\0';j++){              //?????,??????????
				str[j-2]=str[j];
				num[j-2]=num[j];}
			str[j-2]='\0';
			break;
		}
	}
	lashou(str);
}

int main()
{
	char str[101];
	int flag[101]={0},i,len;
	cin.getline(str,101);
	for(i=0;i<strlen(str);i++)
		num[i]=i;
	lashou(str);
	return 0;
}

