/*
 * most books.cpp
 * ??:?????????
 *  Created on: 2012-12-30
 *      Author: ???
 */



int main()
{
	int m=0,num=0,wnum=0,max=0,i=0,j=0;       //??????,??,????,?????
	int books[26][30];                        //??26??????????
	char writer[26],name;                     //????????
	memset(books,0,sizeof(books));            //???
	cin>>m;
	for(i=0;i<m;i++)                          //???????????
	{
		cin>>num>>writer;
		wnum=strlen(writer);
		for(j=0;j<wnum;j++)                   //??????????,?????
			{
			books[writer[j]-65][0]++;
			books[writer[j]-65][books[writer[j]-65][0]]=num;
			}
	}
	for(j=0;j<26;j++)                         //??
		if(max<books[j][0])
			{
			max=books[j][0];
			name=j+65;
			}
	cout<<name<<endl;
	cout<<max<<endl;
	for(j=1;j<=max;j++)
	cout<<books[name-65][j]<<endl;
	return 0;
}