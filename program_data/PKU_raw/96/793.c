
int main(){
    char asd[300],zxc[300];
	int n=0,m=0,i,j,k;
	scanf("%s",asd);
	int len=strlen(asd);
	m=asd[0]-48;
	for(i=1;i<len;i++)
	{
		n=10*m+asd[i]-48;
		zxc[i-1]=n/13+48;
		m=n%13;
	}
	zxc[len-1]='\0';
	for(i=0;i<len-1;i++)
	{
		if(zxc[i]!='0')
			break;
		else
		{
			for(j=0;j<len-1;j++)
			{
				zxc[j]=zxc[j+1];
			}
		}
	}
	if(zxc[0]=='\0')
	{
		zxc[0]='0';
		zxc[1]='\0';
	}
	printf("%s\n%d\n",zxc,m);
	return 0;
}