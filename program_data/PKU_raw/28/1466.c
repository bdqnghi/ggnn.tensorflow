int main(){
char str[30000];
cin.getline(str,30000);
int num=1;
int i=0,j=0;
while(str[i]!='\0')
{
	if(str[i]==' '&&str[i-1]!=' ')
	{
		if(j==0)
		{
			cout<<num;
			j++;
		}
		else
			cout<<','<<num;
		num=0;
	}
	i++;
	if(str[i]!=' ') num++;
}
if(j==0) cout<<num-1<<endl;
else cout<<','<<num-1<<endl;
return 0;
}