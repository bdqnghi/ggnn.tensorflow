/*
 *???: filter_spaces.cpp
 *??: ???
 *????: 2012-12-09
 *??: 
 */



int main()
{
	char input[MAXL],output[MAXL];
	char *s,*t; //??input,output???
	cin.getline(input,sizeof(input));
	for (s=input,t=output; *s; s++){
		if (*s==' '&&*(s-1)==' ')
			continue;
		*t++=*s;
	}
	*t=0; //????\0
	cout << output << endl;
	return 0;
}

