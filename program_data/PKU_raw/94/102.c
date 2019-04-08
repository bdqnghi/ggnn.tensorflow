/*??????????
 ?????? 00948344
 ?????2010/12/24
 */



int main(){
	int n,s[500],t[500];         
	cin>>n;
	int i,j,k;
	for(i=0;i<n;i++)
		cin>>s[i];
    int len=0;
	for(i=0;i<n;i++)
		if(s[i]%2!=0)
		{
			t[len]=s[i];
			len++;
		}
	if(len==0)
		return 0;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-1-i;j++)
			if(t[j]>t[j+1])
			{
				k=t[j];
				t[j]=t[j+1];
				t[j+1]=k;
			}
	cout<<t[0];
	for(i=1;i<len;i++)
		cout<<','<<t[i];
	return 0;
}
   
