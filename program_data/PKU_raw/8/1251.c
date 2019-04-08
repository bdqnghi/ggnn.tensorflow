/*
 * functions.cpp
 *
 *  Created on: 2013-11-29
 *      Author: 111
 */
int str1[50]={1},str2[50]={1};
int length1,length2;
void input_string(void)
{
	cin >> length1 >> length2;
	for (int i=0;i<length1;i++)
		cin >> str1[i];
	for (int i=0;i<length2;i++)
		cin >> str2[i];
}
void rank_string(void)
{
	int temp;
	for (int i=0;i<length1-1;i++)
		for (int j=i+1;j<length1;j++)
			if (str1[i]>str1[j])
			{
			    temp = str1[i];
			    str1[i] = str1[j];
			    str1[j] = temp;
			}
	for (int i=0;i<length2-1;i++)
	    for(int j=i+1;j<length2;j++)
	    	if (str2[i]>str2[j])
	    	{
	    		temp = str2[i];
	    		str2[i] = str2[j];
	    		str2[j] = temp;
	    	}
}
void combine_string(void)
{
	for (int i=length1;i<length1+length2;i++)
		str1[i] = str2[i-length1];
}
void output_string(void)
{
	cout << str1[0];
	for (int i=1;i<length1+length2;i++)
		cout << ' ' << str1[i];
}
int main()
{
	input_string();
	rank_string();
	combine_string();
	output_string();
	return 0;
}
