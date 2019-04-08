/*
 * match (.cpp
 *??:????????
 *  Created on: 2012-12-1
 *      Author: ???
 */



char sign[101];              //????,??
int lf[100];                  //????lf,??(???
int rt[100];                  //????rt,??)???
int len;                     //??????

void match();                //????

int main ()
{
	while(cin.getline(sign,101))
	{
	len=strlen(sign);        //???
	cout<<sign<<endl;        //??????
	int i=0;
	for(i=0;i<100;i++)        //???
		{
		lf[i]=-1;
		rt[i]=-1;
		}
	match();                 //????match
	}
	return 0;
}

void match()
{
	int i=0,j=0,n1=0,n2=0;  //(,)???
	char result[len];
       for(i=0;i<len;i++)
    	   result[i]=' ';  //???
	for(i=0;i<len;i++)     //??(,)???
	{
		if(sign[i]=='(')
			{
			lf[n1]=i;
			n1++;
			}
		if(sign[i]==')')
		    {
			rt[n2]=i;
			n2++;
		    }
	}
	for(i=n1-1;i>=0;i--)   //??????
		for(j=0;j<n2;j++)
		if(lf[i]<rt[j])
		{
			lf[i]=-1;
			rt[j]=-1;
			break;
		}
	for(i=0;i<n1;i++)      //?????
		if(lf[i]>=0)
			result[lf[i]]='$';
	for(j=0;j<n2;j++)
		if(rt[j]>=0)
			result[rt[j]]='?';
	for(i=0;i<len;i++)     //??
		cout<<result[i];
	    cout<<endl;
}