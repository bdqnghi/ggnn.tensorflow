/*
 * 1.cpp
 *
 *  Created on: 2010-12-19
 *      Author: hanzhe
 */


int main(){//????
	int n,i;
	char none[100];//????
	cin>>n;
	cin.getline(none,100);//???????
	while(n>0){
		char a[81];
		int g=0;//???
		cin.getline(a,81);
		int na=strlen(a);//????
		if(((a[0]=='_')+(((a[0]-'a')>=0)&&((a[0]-'z')<=0))+(((a[0]-'A')>=0)&&((a[0]-'Z')<=0)))==1)
			g=1;//?????
		for(i=1;i<na;i++)//????
			if(((a[i]=='_')+(((a[i]-'a')>=0)&&((a[i]-'a')<=25))+
					(((a[i]-'0')>=0)&&((a[i]-'0')<=9))+(((a[i]-'A')>=0)&&((a[i]-'A')<=25)))==1)
				g=g*1;
			else g=g*0;
		cout<<g<<endl;
		n--;
	}
	return 0;
}//????
