int main()
{
	int i,j,k;
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	int sign=0;
	for(i=0;i<=strlen(s1)&&i<=strlen(s2);i++)
	{
		if(s1[i]-s2[i]==32||s2[i]-s1[i]==32)
		continue;
		if(s1[i]>=97)s1[i]-=32;
		if(s2[i]>=97)s2[i]-=32;
		if((int)(s1[i]-s2[i])>0){sign=1;break;}
		if((int)(s1[i]-s2[i])<0){sign=-1;break;}
	}
	if(sign==0)cout<<"=";
	if(sign==1)cout<<">";
	if(sign==-1)cout<<"<";
	return 0;
}
