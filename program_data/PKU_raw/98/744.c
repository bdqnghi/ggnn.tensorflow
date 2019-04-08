/*
 * p.cpp
 *
 *  Created on: 2011-12-2
 *      Author: Administrator
 */
int main()
{
	int max,n,t,i;
	char word[50];
	cin>>n;
	cin>>word;                       //?????word???
	cout<<word;
	max=strlen(word);                //max?????????
	for(i=2;i<=n;i++){
		scanf("%s", word);
		t=strlen(word);
		max+=t+1;
		if(max>80){                  //?????
			max=t;
			cout<<endl<<word;        //????????
			continue;
		}
		cout<<' '<<word;
	}
	return 0;
}