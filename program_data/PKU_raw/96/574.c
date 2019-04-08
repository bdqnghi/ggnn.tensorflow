int main()
{
	int i,j,k;
	int shuzu[101],shang[101]={0};
	int fenjie;
	char chuan[101];//????? 
	cin>>chuan;//????? 
	int length=strlen(chuan);//?????? 
	
	for(i=0;i<length;i++)shuzu[i]=chuan[i]-'0';//??????? 
	
	if(length==1)
    {
		      cout<<"0"<<endl<<shuzu[0]<<endl;
	}//????? 
	
	else
    { 		
            	fenjie=shuzu[0]*10+shuzu[1];
            	shuzu[1]=fenjie%13;
            	if(length==2 && fenjie<13)
                {
                             cout<<"0"<<endl;
                             cout<<fenjie;
                }//??13?????? 
            	else
                {
                    if(fenjie>=13)
                    shang[0]=fenjie/13;//????                                                                     	
                	for(i=1;i<length-1;i++)
                    {
                		fenjie=shuzu[i]*10+shuzu[i+1];
                		shuzu[i+1]=fenjie%13;
                		shang[i]=fenjie/13;
                	}
                	if(shang[0]!=0)cout<<shang[0];
                	for(i=1;i<length-1;i++)cout<<shang[i]; 
                    cout<<endl;
                    cout<<shuzu[i];
                 }//???? 
    }
	return 0;
}