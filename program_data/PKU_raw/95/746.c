/*
 * 1000012889_30.1.cpp
 *
 *  Created on: 2010-11-10
 *      Author: ???
 *        ??:??????????
 */



int main(){
	int i,j;
	char a[80],b[80];                          //???????
	cin.getline(a,80);                         //???????
	cin.getline(b,80);
	for(i=0;a[i]!='\0';i++)                    //????????????
		if(a[i]<=90&&a[i]>=65)
			a[i]=a[i]+32;
	for(i=0;b[i]!='\0';i++)
		if(b[i]<=90&&b[i]>=65)
		    b[i]=b[i]+32;
	j=strcmp(a,b);                             //?????????
	switch(j){                                 //?switch????
	case 1:cout<<">"<<endl;break;
	case 0:cout<<"="<<endl;break;
	case -1:cout<<"<"<<endl;break;
	}
	return 0;
}