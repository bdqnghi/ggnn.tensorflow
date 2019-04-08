int main(){
	int i,j,a[50],k=1,m,p,h;
	char b[300];
	gets(b);
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		if(b[i]==' ')
		{
			a[k]=i+1;
		    k++;
		}
	}
		a[0]=0;a[k]=m+1;
	for(i=0,j=0,h=1;h<k;h++)
	{
		if(a[h+1]-a[h]>a[i+1]-a[i]) i=h;
	else if(a[h+1]-a[h]<a[j+1]-a[j]) j=h;
	}
	for(p=a[i];p<a[i+1]-1;p++)
		printf("%c",b[p]);
                   printf("\n");
	for(p=a[j];p<a[j+1]-1;p++)
		printf("%c",b[p]);

	return 0;
}