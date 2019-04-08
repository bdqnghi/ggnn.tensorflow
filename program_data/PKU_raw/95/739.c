/*
 * 30.cpp
 *
 *  Created on: 2010-11-9
 *      Author: l000012910
 */
int main(){
	int k=0,i;//
	char a[80],b[80];//?????????
	cin.getline(a,80);//
	cin.getline(b,80);//??????
	for(i=0;i<80;i++)
	{
		switch(b[i]){
		case 'a':b[i]='A';break;
		case 'b':b[i]='B';break;
		case 'c':b[i]='C';break;
		case 'd':b[i]='D';break;
		case 'e':b[i]='E';break;
		case 'f':b[i]='F';break;
		case 'g':b[i]='G';break;
		case 'h':b[i]='H';break;
		case 'i':b[i]='I';break;
		case 'j':b[i]='J';break;
		case 'k':b[i]='K';break;
		case 'l':b[i]='L';break;
		case 'm':b[i]='M';break;
		case 'n':b[i]='N';break;
		case 'o':b[i]='O';break;
		case 'p':b[i]='P';break;
		case 'q':b[i]='Q';break;
		case 'r':b[i]='R';break;
		case 's':b[i]='S';break;
		case 't':b[i]='T';break;
		case 'u':b[i]='U';break;
		case 'v':b[i]='V';break;
		case 'w':b[i]='W';break;
		case 'x':b[i]='X';break;
		case 'y':b[i]='Y';break;
		case 'z':b[i]='Z';break;
		default:continue;}//???????????????

	}
	for(i=0;i<80;i++)
		{
			switch(a[i]){
			case 'a':a[i]='A';break;
			case 'b':a[i]='B';break;
			case 'c':a[i]='C';break;
			case 'd':a[i]='D';break;
			case 'e':a[i]='E';break;
			case 'f':a[i]='F';break;
			case 'g':a[i]='G';break;
			case 'h':a[i]='H';break;
			case 'i':a[i]='I';break;
			case 'j':a[i]='J';break;
			case 'k':a[i]='K';break;
			case 'l':a[i]='L';break;
			case 'm':a[i]='M';break;
			case 'n':a[i]='N';break;
			case 'o':a[i]='O';break;
			case 'p':a[i]='P';break;
			case 'q':a[i]='Q';break;
			case 'r':a[i]='R';break;
			case 's':a[i]='S';break;
			case 't':a[i]='T';break;
			case 'u':a[i]='U';break;
			case 'v':a[i]='V';break;
			case 'w':a[i]='W';break;
			case 'x':a[i]='X';break;
			case 'y':a[i]='Y';break;
			case 'z':a[i]='Z';break;
			default:continue;}
		}//?????????????
k=strcmp(a,b);//?k???k=1?????-1??a?b.1??a?b
if(k==0)
	cout<<"="<<endl;
else if(k==1)
	cout<<">"<<endl;
else if(k==-1)
	cout<<"<"<<endl;//????
return 0;
}
