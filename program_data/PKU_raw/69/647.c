void main()
{
	char a[251]={'\0'},b[251]={'\0'},c[252]={'\0'};
	int i,j,len[2],t=0,k;
	scanf("%s%s",a,b);
	len[0]=strlen(a);
	len[1]=strlen(b);
         if(len[0]==1&&len[1]==1)
               if(a[0]=='0'&&b[0]=='0')
          printf("0");
	for(i=len[0]-1,j=len[1]-1,k=251;i>=0&&j>=0;i--,j--,k--)
	{if(a[i]-48+b[j]-48+t>9&&a[i]-48+b[j]-48+t<20)
	{c[k]=a[i]-48+b[j]-10+t;
	t=1;}
	else if(a[i]-48+b[j]-48+t>=20)
	{c[k]=a[i]-48+b[j]-20+t;
	t=2;}
	else{
		c[k]=a[i]-48+b[j]+t;
	t=0;}
	}
	if(j>=0){
	for(;j>=0;k--,j--)
	{if(t+b[j]-48>9)
	{c[k]=b[j]+t-10;
	t=1;}
	else
	{c[k]=b[j]+t;
	t=0;}}}
	else if(i>=0){
	for(;i>=0;k--,i--)
	{if(t+a[i]-48>9)
	{c[k]=a[i]+t-10;
	t=1;}
	else
	{c[k]=a[i]+t;
	t=0;}}}
	if(t>0)
	{c[k]=t+48;
	k--;}
	for(j=k+1;j<252;j++)
		if(c[j]!=48)
                   break;
         for(i=j;i<252;i++)
              printf("%c",c[i]);
}
