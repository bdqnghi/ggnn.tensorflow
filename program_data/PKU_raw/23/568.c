/*
 * 11.1613.cpp
 *
 *  Created on: 2012-11-14
 *      Author: ???
 */
int main()
{
	char x[10000],a[1000][1000],temp[1000];
	cin.getline(x,10000);//????
	int i,lenth,j=0,k=0;
	lenth=strlen(x);
	for(i=0;i<lenth;i++)//????
	{
		if(x[i]!=' ')
		{
			a[j][k]=x[i];
			k++;
		}
		if(x[i]==' ')
		{
			a[j][k]='\0';
			j++;
			k=0;
		}
	}
for(i=0,k=j;k>i;i++,k--)//????
{
	strcpy(temp,a[i]);
	strcpy(a[i],a[k]);
	strcpy(a[k],temp);

}
cout <<a[0];//??
for(i=1;i<=j;i++)
	cout<<" " << a[i];
}

