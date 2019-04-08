/*
 * fx01.cpp
 *
 *  Created on: 2013-1-11
 *      Author: SONY
 */
int main(){
	char str[501];
	cin>>str;
	int len;
	len=strlen(str);
    int i,j;
    for(i=2;i<=len;i++)
    {
    	for(j=0;j<=len-i;j++)
    	{
    		int m,k,t,b=0;
    			k=j;
    			t=j+i-1;
    			for(m=1;m<=i/2;m++)
    			{
                    if(str[k]==str[t])
                    {
                    	b++;
                    	k++;
                    	t--;
                   	}
                    else break;
    			}
    			if(b==i/2)
    			{
    				for(m=j;m<=j+i-1;m++)
    				{
    					cout<<str[m];
    				}
    				cout<<endl;
    			}
    			b=0;
    		}
    }
    return 0;
}
