


int in[20000]={0},out[20000]={0};
char line1[20000], line2[20000];
int t=1,s=1;


struct time
{
    int in;
    int out;
}person[10000];

int convert();

int main()
{
	
	int	 max = 0;
	
	cin.getline(line1,20000);
	cin.getline(line2,20000);
	convert();

	for(int i=0; i<1000; i++)
	{
		int counter=0;
		for(int j=0; j<t; j++)
		{
			if(person[j].in<=i && person[j].out>i)
			{
				counter++;
				if(counter>max)
					max=counter;
			}
		
		
		}

	
	}

	cout<<t<<" " <<max;
return 0;
}

int convert()
{
	
	person[0].in=atof(line1);
	for(int i=0; i<strlen(line1);i++)
	{
		
		if(line1[i-1]!=',')
			continue;
		else
		{
			person[t].in=atof(&line1[i]);
			t++;
		}
	}
	
	person[0].out=atof(line2);
	for(int i=0; i<strlen(line2);i++)
	{
		
		if(line2[i-1]!=',')
			continue;
		else
		{
			person[s].out=atof(&line2[i]);
			s++;
		}
	}

return 0;
}
