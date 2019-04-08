/*
 * END2.cpp
 * ??(12-5) ??????
 *  Created on: 2013-1-10
 *      Author: Administrator
 */
int main(){
	int k=1;
    char c[1000],nowchar;
    cin>>c;
    int i=0;
    while(i<strlen(c)-1){
    	 if(c[i]>='a'&& c[i]<='z') nowchar=c[i]-'a'+'A';
    	    	    else nowchar=c[i];
    	while((c[i+1]==c[i] || c[i+1]==c[i]-'A'+'a' || c[i+1]==c[i]-'a'+'A'))
    	{      			k++;i++;
    	}cout<<"("<<nowchar<<","<<k<<")";
    	k=1;
    	i++;
    	}
    if(c[strlen(c)-1]!=c[strlen(c)-2]) {
    	if(c[i]>='a'&& c[i]<='z') nowchar=c[i]-'a'+'A';
    	    	    else nowchar=c[i];
    	cout<<"("<<nowchar<<",1)";
    }
    return 0;
}

