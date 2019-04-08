int main()
{
	char word_in[200],word_tr[200],word_out[200],word_fil[200];
	for(int i=0;i<200;i++)
	{
		word_in[i]=0;
		word_tr[i]=0;
		word_out[i]=0;
		word_fil[i]=0;
	}
	int lg1,lg2,lg3,lg4,sum=0,t=0;
	cin.getline(word_in,200);
	lg1=strlen(word_in);
	word_in[lg1]=' ';
	cin.getline(word_tr,200);
	lg2=strlen(word_tr);
	cin.getline(word_out,200);
	lg3=strlen(word_out);
	for(int i=0;i<200;i++)
	{
		sum=0;
		for(int j=0;j<lg2;j++)
		{
			if (word_in[i+j]==word_tr[j])
			{
				sum=sum+1;
			}
		}
		if ((word_in[i-1]==' '||i==0)&&word_in[i+lg2]==' '&&sum==lg2)
		{
			if (lg3==lg2)
			{
				for(int j=0;j<lg3;j++)
			    {
					word_in[i+j]=word_out[j];
			    }
			    i=i+lg2;
			}
			if (lg3<lg2)
			{
				for(int j=0;j<lg3;j++)
			    {
					word_in[i+j]=word_out[j];
			    }
				for(int j=lg3;j<lg2;j++)
				{
					word_in[i+j]=' ';
				}
				i=i+lg2;
			}
			if (lg3>lg2)
			{
				for (int j=199;j>=i+lg2;j--)
				{
					word_in[j+lg3-lg2]=word_in[j];
				}
				for(int j=0;j<lg3;j++)
			    {
					word_in[i+j]=word_out[j];
			    }
			    i=i+lg3;
			}
		}
	}
	for(int i=0;i<200;i++)
	{
		if (word_in[i]!=' ')
		{
			word_fil[t]=word_in[i];
			t++;
		}
		if (word_in[i]==' ')
		{
			if (word_in[i+1]!=' ')
			{
				word_fil[t]=word_in[i];
				t++;
			}
		}
	}
	lg4=strlen(word_fil);
	for(int i=0;i<lg4-1;i++)
	{
		cout<<word_fil[i];
	}
	cout<<endl;
	return 0;
}
		
