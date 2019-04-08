/*
 *???: word_reverse.cpp
 *??: ???
 *????: 2012-11-08
 *??: ????
 */



int main()
{
	char str[2][120];
	int k,we; //????????????????
	cin.getline(str[0],sizeof(str[0]));

	we=strlen(str[0]);
	k=0;
	for (int i=we-1;i>=0;i--){
		if (i==0){
			if (k) str[1][k++]=' ';
			for (int j=0;j<we;j++)
				str[1][k++]=str[0][j];
			str[1][k]=0;
		}
		else if (str[0][i]==' '){
			if (k) str[1][k++]=' ';
			for (int j=i+1;j<we;j++)
				str[1][k++]=str[0][j];
			str[1][k]=0;
			we=i;
		}
	}
	cout << str[1] << endl;
	return 0;
}


