/*???????
 * thirteen.cpp
 *
 *  Created on: 2013-12-23
 *      Author: Administrator
 */
int main()
{
	char istr[101],istr1[101];
	int len=0,left=0,a=0,i=0,count=0;
	while(cin.getline(istr,101)){
		count=0;
		len=strlen(istr);
	    for(i=0;i<len;i++){
	    	a=left*10+istr[i]-'0';
	    	left=a%13;
	    	istr1[i]=a/13+'0';
	    }
	    istr1[i]='\0';
	    for(i=0;i<len;i++){
	    	if(istr1[i]!='0'||count!=0){
	    		cout<<istr1[i];
	    		count=1;
	    	}
	    }
	    if(count==0)cout<<"0";
	    cout<<endl;
	    cout<<left<<endl;
	    cin.get();
	}
	return 0;
}

