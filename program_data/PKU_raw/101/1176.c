//============================================================================
// Name        : shj.cpp
// Author      : ???
// Time        : 2013.12.07
// Description : ???
//============================================================================
int main(){
	int a=0,b=0,c=0;
	int x=0,y=0,z=0;
	for(a=0;a<3;a++)
		for(b=0;b<3;b++)
			for(c=0;c<3;c++){
				if(a==b||a==c||b==c)continue;
				else{
				   x=(b>a)+(c>a);//a???????
				   y=(a>b)+(a>c);//b???????
				   z=(c>b)+(b>a);//c???????
				   if(b>a&&a>c&&z>x&&x>y)
				   	   cout<<"B"<<"A"<<"C"<<endl;//????
				   if(b>c&&c>a&&x>z&&z>y)
				   	   cout<<"B"<<"C"<<"A"<<endl;//????
				   if(c>b&&b>a&&x>y&&y>z)
				   	   cout<<"C"<<"B"<<"A"<<endl;//????
				   if(c>a&&a>b&&y>x&&x>z)
				   	   cout<<"C"<<"A"<<"B"<<endl;//????
				}
			}
  return 0;
}
