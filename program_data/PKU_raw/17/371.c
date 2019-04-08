
int function(char* out,int t)
{
	int i=t;
	if(out[i]=='(')
	{
		out[i]='$';
		i++;
		while(out[i]!=')'&&out[i])
		{
			if(out[i]=='(')
			{
				i=function(out,i)+1;
				if(i==-1)return -2;
			}
			else 
			{
				out[i]=' ';
			    i++;
			}
		}
		if(out[i]==')')
		{
			out[t]=out[i]=' ';
			return i;
		}
		else return -2;
	}
	else
	{
		while(out[i]!='('&&out[i])
		{
			if(out[i]==')')
				out[i]='?';
			else
			    out[i]=' ';
			i++;
		}
		if(out [i]=='(')
			return function(out,i);
		else return -2;
	}
}



int main()
{
	char out[101];
	int n=-1;
	cin.getline(out,101);
	while(out[0])
	{
		n=-1;
		cout<<out<<endl;
		while(n!=-2)
		{
			n=function(out,n+1);
		}
		cout<<out<<endl;
		cin.getline(out,101);
	}
	return 0;
}