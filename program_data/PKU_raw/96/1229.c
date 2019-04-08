int main()
{
	int u;
	char a[101];
	for (u=0;u<100;u++)
		a[u]='\0';
	scanf ("%s",a);
	char shang[101];
	for (u=0;u<100;u++)
		shang[u]='\0';
	int yu=0;
	int i,j;
	if (strlen(a)==1)
	{
		shang[0]='0';
		yu=a[0]-'0';
	}
	else if (strlen(a)==2)
	{
		shang[0]=((a[0]-'0')*10+(a[1]-'0'))/13+'0';
		yu=((a[0]-'0')*10+(a[1]-'0'))%13;
	}
	else if ((a[0]-'0')*10+(a[1]-'0')<13)
	{
		shang[0]=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0')+yu)/13+'0';
		yu=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0')+yu)%13;
		for (i=1;i+2<strlen(a);i++)
		{
			shang[i]=((a[i+2]-'0')+yu*10)/13+'0';
			yu=((a[i+2]-'0')+yu*10)%13;
		}
	}
	else
	{
		yu=a[0]-'0';
		for (i=0;i+1<strlen(a);i++)
		{
			shang[i]=(a[i+1]-'0'+yu*10)/13+'0';
			yu=(a[i+1]-'0'+yu*10)%13;
		}
	}
	printf ("%s\n%d\n",shang,yu);
}