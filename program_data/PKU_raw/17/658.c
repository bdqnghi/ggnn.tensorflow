int main()
{
	char l,r,s,sen[200],rem[200];
	int i=1,j=1,k=1,nsen,b=1;
	l='(';r=')';

	while(b==1)
	{

		while((s = cin.get())!='\n')
		{sen[i]=s;rem[i]=s;i++;
		}nsen=i-1;

		for(j=1;j<nsen;j++)//??????
			for(i=1;i<nsen;i++)
				if(sen[i]==l && sen[i+j]==r)
				{sen[i]=' ';sen[i+j]=' ';}//?????????????

				for(i=1;i<=nsen;i++)
					if(sen[i]==l)sen[i]='$';
					else if(sen[i]==r)sen[i]='?';//?????????
					else sen[i]=' ';//?????????


					for(i=1;i<=nsen;i++)
						cout<<rem[i];
					cout<<endl;
					for(i=1;i<=nsen;i++)
						cout<<sen[i];
					cout<<endl;

					nsen=0;i=1;j=1;k=1;
	}


	return 0;
}

