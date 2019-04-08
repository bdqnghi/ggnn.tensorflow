
int main(){
	char zxc[230],cxz[230];
	int i,j;
	int n,len;
	gets(zxc);
	for(j=0;zxc[j]!='\0';j++)
	{
		if(zxc[j]==' ')
		{
			if(zxc[j-1]==' ')
			{
				for(i=j;zxc[i]!='\0';i++)
				{
					zxc[i]=zxc[i+1];
				}
				j--;
			}
		}
	}
	puts(zxc);
	return 0;
}
