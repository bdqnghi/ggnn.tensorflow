/*
 * 1.cpp
 *
 *  Created on: 2012-11-9
 *      Author: 99003
 */

int main(){
	int i,j,k;
	char a[10000];
	char word[1000][100];
	int wordl[1000];
	cin.getline(a,10000);
	int length,wordn;
	wordn=1;
	length=strlen(a);
	wordl[1]=0;
	for(i=0;i<length;i++)//?????????
	{
		if(a[i]!=' ')
		{
			word[wordn][wordl[wordn]+1]=a[i];
			wordl[wordn]=wordl[wordn]+1;
		}
		if(a[i]==' ')
		{
			wordn=wordn+1;
		}
	}
	for(i=wordn;i>=1;i--)//????
	{
		for(j=1;j<=wordl[i];j++) cout<<word[i][j];
		  if(i!=1)   cout<<" ";
	}




	return 0;


}