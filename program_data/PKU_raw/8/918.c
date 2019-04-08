/*
 * ????addition-of-big-int.cpp
 * ??????
 * ????:2012-11-27
 * ??????????????
 */

int la=0,lb=0,l=0,a[100],b[100],combine[200]; //??????la,lb,??a,b,combine

void input();                                 //????input
void seq();                                   //????seq
void sequence(int x[100]);                    //????sequence
void com(int a[100],int b[100]);              //????com
void output(int combine[200]);                //????output

int main(){                                   //???
	input();                              //??
	seq();                                //??
	com(a,b);                             //???a,b?????combine
	output(combine);                      //??combine
	return 0;                             //?????
}
void input(){                                 //??input
	cin>>la>>lb;                          //????a,b???la,lb
	for(int i=0;i<la;i++)                 //????a
		cin>>a[i];
	for(int i=0;i<lb;i++)                 //????b
		cin>>b[i];
}
void seq(){                                   //??seq
	l=la;
	sequence(a);                          //??a
	l=lb;
	sequence(b);                          //??b
}
void sequence(int x[100]){                    //????sequence
	int temp=0;                           //????temp
	for(int i=1;i<l;i++)                  //??????
		for(int j=1;j<=l-i;j++)
			if(x[j-1]>x[j])
			{
				temp=x[j];
				x[j]=x[j-1];
				x[j-1]=temp;
			}
}
void com(int a[100],int b[100]){              //????com
	memcpy(combine,a,la*4);
	memcpy(combine+la,b,lb*4);
}
void output(int combine[200]){                //??output
	cout<<combine[0];                     //???????combine
	for(int i=1;i<la+lb;i++)
		cout<<" "<<combine[i];
}