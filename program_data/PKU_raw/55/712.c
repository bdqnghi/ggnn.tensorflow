int main()
{
	unsigned long shuz1,shuz2,total=0; 
	int i=0,j=0,k=0,length; 
	char n[33],result[33]; 
	cin>>shuz1>>n>>shuz2;
	for(i=0;i<33;i++)
	{
		if(n[i]=='\0')
		{
			 length=i;
		break;
		}
	}
	for(i=0;i<length;i++)
	{
		if(n[i]>60&&n[i]<93)
			total+=(n[i]-55)*pow((double)shuz1,length-i-1);
		else if(n[i]>93)
			total+=(n[i]-87)*pow((double)shuz1,length-i-1);
		else
			total+=(n[i]-48)*pow((double)shuz1,length-i-1);
	}
        if (total == 0) {
            cout << 0 << endl;
            return 0;
        }
	for(j=0;total>0;j++)
	{
		result[j]=total%shuz2;
		total=(total-result[j])/shuz2;
	}
	for(k=0;k<33;k++)
	{
	if(result[k]<10)
		result[k]=result[k]+48;
	else 
		result[k]=result[k]+55;
	}
	for(k=j-1;k>=0;k--)
		cout<<result[k];
        cout << endl;
	return 0;
}
