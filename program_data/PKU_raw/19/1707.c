
int main ()
{
	int i=0 ,j=0,k=0,len;//??????
    char str1[101],orig[30],tran[30];//???????????????
	char  str2[50][30];//????????
	cin.get(str1,101,'\n');
	cin>>orig;
	cin>>tran;

	                    while(str1[i]!='\0')//??\0?
						{	
							while(str1[i]!=' ')//??  ?
							{
							   str2[j][k]=str1[i];
							       i++;k++;//??
							}
                              str2[j][k]='\0';
                               j++;//??
                               i++;//??
							   k=0;//??
						}
                  len=j-1;//??-1
				  for(i=0;i<=len;i++)
				  {
				      if(strcmp(str2[i],orig)==0)//??
						  strcpy(str2[i],tran);
				  }
                        for(i=0;i<=len-1;i++)
							cout<<str2[i]<<" ";
						cout<<str2[len];//??????????
	
return 0;
}