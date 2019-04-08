/* * dancidaopai.cpp
 *
 *  Created on: 2012-11-21
 *      Author: Lenovo
 */
int main(){
	char s[105],v[100][100],m[100];
	int i,j=0,k=0,p,num[100];
	cin.getline(s,100);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			v[k][j]=s[i];
			j=j+1;
		}
		if(s[i]==' ')
		{
			num[k]=j;
			k=k+1;
			j=0;
		}

	}
	num[k]=j;
	for(i=0;i<=k/2;i++)
	{
		strcpy(m,v[i]);   p = num[i];
		strcpy(v[i],v[k-i]); num[i] = num[k-i];
		strcpy(v[k-i],m);   num[k-i] = p;
	}
	for(i=0;i<k;i++)
	{	for(j=0;j<num[i];j++)
		{
			cout<<v[i][j];
		}
	cout<<' ';
	}
	for(i=0;i<num[k];i++)
	{
		cout<<v[k][i];
	}
return 0;
}
