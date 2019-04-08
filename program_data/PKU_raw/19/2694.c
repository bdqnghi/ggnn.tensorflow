
int main()
{
    char a[105],b[105],s[105],c[105][105];
    int i,len,startp,endp,cur_c,k;
    gets(s);
    cin>>a>>b;
	len=strlen(s);
	startp=0;endp=1,cur_c=0;
	while(endp<=len)
	{
	    if(s[endp]==' ' || s[endp]=='\0')
	    {
		    for(i=startp,k=0;i<=endp-1;i++,k++)
		        c[cur_c][k]=s[i];
		    c[cur_c][k+1]='\0';
			cur_c++;
		    startp=endp+1;
		    endp=startp+1;
		}
		else endp++;
	}
	for(i=0;i<cur_c;i++)
	    if(!strcmp(a,c[i]))strcpy(c[i],b);
	cout<<c[0];
	for(i=1;i<cur_c;i++)
	    cout<<' '<<c[i];
	cout<<endl;
}
