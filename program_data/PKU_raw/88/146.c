/*
 * ????.cpp
 *
 *  Created on: 2011-12-25
 *      Author: Administrator
 */
int main()//?????
{//?????
    char str[31];
    cin.getline(str,31);//??
    int length=strlen(str);//????
    int i,j,t;
    for(i=0;i<= length;i++)
    {
		if((str[i]<'0')||(str[i]>'9'))continue;//???i????????????
		else
			for(j=1;j<=length-i;j++)
			{
    			if((str[i+j]<'0')||(str[i+j]>'9') || (str[i+j]=='\0'))
    			{
    				for(t=i;t<i+j;t++)
    					cout<<str[t];
    				cout<<endl;//??
    				i = i + j - 1;
    				break;
    			}
    		}
    }
    return 0;//???????????????????
}//????
