int main()
{char str[101];
int i,j,temp,count=1;
cin.getline(str,101);
for(i=strlen(str);i>=0;i--)
	{
	if((str[i]==' ')&&(count!=1)){for(j=i+1;j<temp;j++)cout<<str[j];
    cout<<" ";
	temp=i;}
	if((str[i]==' ')&&(count==1)){temp=strlen(str);
	                              for(j=i+1;j<temp;j++)cout<<str[j];cout<<" ";//??????????????
	                                count=2;temp=i; }
	}
for(i=0;i<strlen(str);i++){cout<<str[i];if(str[i+1]==' ')break;}//????????????


	return 0;
}
