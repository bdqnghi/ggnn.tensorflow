int main()
{
	char word[1000][83];
	int n,i,counter=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>word[i];
        char *p,*temp;
	for(i=0;i<n;i++)
	{
                temp=word[i];
		if(counter==0)
		{
                        for(p=temp;p<temp+strlen(word[i]);p++)
                             cout<<*p;
			counter=counter+strlen(word[i]);
		}
		else
		{
			if(counter+strlen(word[i])+1<=80)
			{
				cout<<" ";
                                for(p=temp;p<temp+strlen(word[i]);p++)
                                      cout<<*p;
				counter=counter+strlen(word[i])+1;
			}
			else
			{
				cout<<endl;
				counter=0;
				i--;
			}
		}
	}
	return 0;
}