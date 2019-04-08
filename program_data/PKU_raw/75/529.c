/*
 * 1000012795-?????.cpp
 *   ?????
 *  Created on: 2010-12-19
 *      Author: ??
 */
int main()//?????
{
	int len1,len2,i,j=0,k=0,l=0,m=0,num=1,max=0;
	int cishu[1000000]={0};//?????????????????
	double a[100000]={0};//??str1?????????
	double b[100000]={0};//??str2?????????
	char  str1[100000];
	char  str2[100000];
	gets(str1);
	gets(str2);
	len1=strlen(str1),len2=strlen(str2);
    for(i=0;i<len1;i++)//?str1???double???
    {
    	char c[1000][1000];
    	if(str1[i]==',')
    	{
    		a[k++]=atof(c[j]);
    		j++;
    		l=0;
    	}
    	if(str1[i]!=',')
    	{
    		c[j][l]=str1[i];
    		l++;
    	}
    	if(i==len1-1)
    		a[k]=atof(c[j]);
    }
    j=0,l=0;
    for(i=0;i<len2;i++)//?str2???double???
    {
    	char d[1000][1000];
        if(str2[i]!=',')
        {
        	d[j][l]=str2[i];
        	l++;
        }
        if(str2[i]==',')
        {
        	b[m++]=atof(d[j]);
        	j++;
        	l=0;
        }
        if(i==len2-1)
           b[m]=atof(d[j]);
     }
    for(i=0;i<=k;i++)//?????????????????cishu?
    	for(l=a[i];l<b[i];l++)
    	{
    		cishu[l]++;
    		num++;
    	}
    for(m=0;m<num+5;m++)//???????????
    	if(cishu[m]>max)
    		max=cishu[m];
    cout<<k+1<<" "<<max<<endl;
    return 0;//????
}
