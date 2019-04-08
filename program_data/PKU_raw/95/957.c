/*
 * c.cpp
 * ???1100012870;
 * ???????
 *  Created on: 2011-10-19
 *      Author: Li Wenpeng
 */
int main()
{
	char a[100],b[100];
	int i,s1;
	gets(a);
	gets(b);
	s1=strlen(a);                               //????????
    for(i=0;i<=s1;i++)
    {
    	if((a[i]>='a')&&(a[i]<='z')) a[i]=a[i]-32;    //???????
    	if((b[i]>='a')&&(b[i]<='z')) b[i]=b[i]-32;    //???????
    	if(a[i]-b[i]==0) continue;                    
    	else if (a[i]>b[i]) {cout<<'>'<<endl;return 0;}        //????????????????
    	else {cout<<'<'<<endl;return 0;}
    }
    cout<<'='<<endl;                             //?????????‘=’
    return 0;
}
