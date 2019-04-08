//============================================================================
// Name        : homework.cpp
// Author      : ???
// Time        : 2013.10.23
// Description : ???
//============================================================================

int main() {
	int a=0,b=0,c=0;//?????
	for(a=0;a<=2;a++){//a??
		for(b=0;b<=2;b++){//b??
			for(c=0;c<=2;c++){//c??
				if(a==b||a==c||b==c)//?????????
					continue;
				int x=0,y=0,z=0;//?????????
				if(b>a) x++;
				if(a>b) y++;
				if(a>c) y++;
				if(c>b) z++;
				if(b>a) z++;
				if(a>b&&b>c&&x<y&&y<z)//?????????
					cout<<"CBA"<<endl;
				if(a>c&&c>b&&x<z&&z<y)
					cout<<"BCA"<<endl;
				if(b>a&&a>c&&y<x&&x<z)
					cout<<"CAB"<<endl;
				if(b>c&&c>a&&y<z&&z<x)
					cout<<"ACB"<<endl;
				if(c>a&&a>b&&z<x&&x<y)
					cout<<"BAC"<<endl;
				if(c>b&&b>a&&z<y&&y<x)
					cout<<"ABC"<<endl;

			}
		}
	}
	return 0;
}//?????
