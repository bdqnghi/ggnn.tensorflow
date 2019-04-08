int an1[255];
int an2[255];
char s1[255];
char s2[255];
int main()
{
cin>>s1;cin>>s2;
int i, j;
int nLen1,nLen2;
for(i=0;i<255;i++)
{
	an1[i]=0;
	an2[i]=0;
}
for(i=0;i<255;i++)
{
	if(s1[i]=='\0')
	{nLen1=i;break;}
}
for(i=0;i<255;i++)
{
	if(s2[i]=='\0')
	{nLen2=i;break;}
}
j = 0;
for( i = nLen1 - 1;i >= 0 ; i --)
an1[j++] = s1[i] - '0';   
j = 0;
for( i = nLen2 - 1;i >= 0 ; i --)
an2[j++] = s2[i] - '0';
for( i = 0;i <255; i ++ ) {
an1[i] += an2[i];
if( an1[i] >= 10 ) {       
an1[i] -= 10;
an1[i+1] ++;
}
}
int a=0;
for(i=255;i>=0;i --) 
{
        if(i==0)
{
          cout<<an1[i];
break;}
	if(an1[i]==0&&a==0)
		continue;
	if(an1[i]!=0)
	{
	a=1;
	}
	cout<<an1[i];
}
 return 0;
}