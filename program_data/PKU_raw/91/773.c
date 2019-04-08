/*
 *???: friend_string.cpp
 *??: ???
 *????: 2012-12-09
 *??: ???????
 */



int main()
{
	char str1[MAXL+10],str2[MAXL+10];
	char *p,*q;
	
	cin.getline(str1,sizeof(str1));
	for (p=str1,q=str2;*p;p++,q++){
		*q=*p;
		if (*(p+1)) //????????
			*q+=*(p+1);
		else
			*q+=*str1;
	}
	*q=0; //???\0
	cout << str2 << endl;
	return 0;
}

