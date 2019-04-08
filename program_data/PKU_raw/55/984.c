/*
 * ????.cpp
 *
 *  ??: 2010-11-12
 *      Author: ??
 */

int main(){
	int a,b,i=0,j=0,t=0;
	double p,l;
	char n[100],m[100];
	cin>>a>>n>>b;
	l=strlen(n);
	for(i=0;i<l;i++)
	{{if(n[i]>='A'&&n[i]<='Z')
		p=n[i]-55;
	else if(n[i]>='a'&&n[i]<='z')
		p=n[i]-87;
	else p=n[i]-48;}t+=p*pow((double)a,l-i-1.0);
	}
	while(t/b!=0)
		{m[j]=t%b;
		t=t/b;
		j++;
		}m[j]=t%b;

		while(j>=0){if(m[j]>9)(char)(m[j]+=55);
		else (char)(m[j]+=48);
			cout<<m[j];j--;}
	return 0;
}