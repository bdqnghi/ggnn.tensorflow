/*
 * ???????.cpp
 *
 *  Created on: 2011-1-8
 *      Author: wangwei
 */
int main()
{
	char a[101];
	cin.getline(a,101);
	int i,j,l,p=0,q=0;
	l=strlen(a);
	for(i=0;i<l;i++)
		if(a[i]==' ')
		{
			p=0;
			for(j=i;i<=l;j++)
			{
				if(a[j]!=' ')
					break;
				p++;
			}
			for(j=i+1;j<=l;j++)
			{
				a[j]=a[j+p-1];
			    q++;
			}
		}
	a[l-q]='\0';
	cout<<a<<endl;
	return 0;
}