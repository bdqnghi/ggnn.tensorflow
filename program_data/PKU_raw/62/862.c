int main()
{
	char zifu[300],tihuan[300];
	int k,i=0;
	gets(zifu);
	for(k=0;k<strlen(zifu);k++)
	{
		if((zifu[k]!=' ')||(zifu[k]==' '&&zifu[k+1]!=' '))
		{
		   tihuan[i]=zifu[k];
		   i++;
		}
        else
		{
		   continue;
		}
	}
	for(k=0;k<i;k++)
	{
	printf("%c",tihuan[k]);
    }
	return 0;
}