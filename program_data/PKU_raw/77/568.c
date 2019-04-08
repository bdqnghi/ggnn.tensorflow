char line[100];
char boy,girl;
int len;
void queue(int b)
{
	
	int i=0;
	if(b==len)
		return;
	else
	{
		if(line[b]==girl)
		{
			line[b] = 0;
			for( i=b-1;i>=0;i--)
			{
				if(line[i]==boy)
				{
					cout << i << " " << b << endl;
					line[i]=0;
					break;
				}
			}
	        queue(b+1);
		}
		else
		    queue(b+1);
	}
}
int main()
{
	cin >> line;
    len =strlen(line); 
    boy=line[0];
	girl = line[len-1];
	queue(1);
	return 0;
}

