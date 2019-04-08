/*
 * add large number.cpp
 *??:?????
 *  Created on: 2012-11-27
 *      Author: ???
 */


char num1[260];
char num2[260];
char result[260];
int len1,len2;
void add();
int main ()
{

	cin.getline(num1,250);
	cin.getline(num2,250);
	len1=strlen(num1);
	len2=strlen (num2);
    add();
    return 0;
}

void add()
{
	if(len1>len2)
	{
		int i=0;
	    for(i=0;i<len2;i++)
	   {
		result[len1-i]=result[len1-i]+num1[len1-1-i]+num2[len2-1-i]-48;
		if(result[len1-i]>57)
			{
			result[len1-i]=result[len1-i]-10;
			result[len1-i-1]++;
			}
	   }
	    for(i=len2;i<len1;i++)
	    {
	    	result[len1-i]=result[len1-i]+num1[len1-i-1];
	    	if(result[len1-i]>57)
	    			{
	    			result[len1-i]=result[len1-i]-10;
	    			result[len1-i-1]++;
	    			}
	    }
        for(i=0;i<=len1;i++)
        	if(result[i]!='0'&&result[i]!='\0')
        		break;
            if(i==len1)
               cout<<result[1];
            else{
        if(48<result[i]&&result[i]<=57)
    	            	;
    	        else
    	       result[i]=result[i]+48;
        for(i=i;i<=len1;i++)
        	cout<<result[i];}
	}
	else
	{
		int i=0;
	    for(i=0;i<len1;i++)
	   {
		result[len2-i]=result[len2-i]+num1[len1-1-i]+num2[len2-1-i]-48;
		if(result[len2-i]>57)
			{
			result[len2-i]=result[len2-i]-10;
			result[len2-i-1]++;
			}
	   }
	    for(i=len1;i<len2;i++)
	    {
	    	result[len2-i]=result[len2-i]+num2[len2-i-1];
	    	if(result[len2-i]>57)
	    			{
	    			result[len2-i]=result[len2-i]-10;
	    			result[len2-i-1]++;
	    			}
	    }
	    for(i=0;i<len2;i++)
	           	if(result[i]!='0'&&result[i]!='\0')
	           		break;
	            if(i==len2)
	                   cout<<result[1];
	            else
	            	{if(48<result[i]&&result[i]<=57)
	            	;
	            else
	            	result[i]=result[i]+48;
	           for(i=i;i<=len2;i++)
	           	cout<<result[i];}
	}
}