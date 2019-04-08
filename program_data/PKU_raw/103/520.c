int main()
{   
	int i,j,p,q,count=0;
	char f[1000];
	cin.getline(f,1000);
	for(i=0;i<1000;i++)
	{if(f[i]>='a' && f[i]<='z')f[i]=f[i]-'a'+'A';}
	for(p=0;p<strlen(f);p++)
	{   
		if(f[p]=='\0')break;
		if(f[p]=='0')continue;
	    for(q=p+1;q<strlen(f);q++)
			{
			  if(f[q]==f[p]){count++;f[q]='0';}
              else {break;}
			}
		cout<<"("<<f[p]<<","<<count+1<<")";
		f[p]='0';
		count=0;
	}
	return 0;
}