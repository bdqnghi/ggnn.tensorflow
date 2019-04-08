int main()
{
	char max(char a[10]);
	char a[100][15]={'\0'},b[100][3];
	int i,j;
	for(i=0;;i++)
	{
		scanf("%s %s",a[i],b[i]);
        if(a[i][0]=='\0')break;
	}
	int count=i+1;
	for(i=0;i<count;i++)
    {	
	 int m=strlen(a[i]);
     char c[13]={0};
	 int k=0;
	 for(j=0;j<m;j++)
	 {
		if(k==0) c[j]=a[i][j];
		else if(k>0) c[j+3]=a[i][j];
		if((a[i][j]==max(a[i]))&&(k==0)) {c[j]=a[i][j];c[j+1]=b[i][0];c[j+2]=b[i][1];c[j+3]=b[i][2];k++;}
	 }
	 if(i<count-1) printf("%s\n",c);else if(i==count-1) printf("%s\n",c);
	}
}
char max(char a[10])
{
  int i;char t=a[0];
  for(i=0;i<10;i++)
    if(a[i]>t) t=a[i];
  return(t);
}