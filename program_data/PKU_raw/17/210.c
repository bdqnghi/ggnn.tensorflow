int main()
{
    int i, j, f1=0, f2=0;
    char line[101], copy[101];
    while (cin >> line)
    {
	    strcpy(copy,line);
		for (i=0;i<strlen(line);i++)
	    {
			if (line[i]==')')
			    line[i]='?';
			if (line[i]=='(')
			{
				f1=1;
				for (j=i+1;j<strlen(line);j++)
				{
					if (line[j]=='(') f1++;
					if (line[j]==')') 
					{
						f1--;
						if (f1==0)
						{
							line[i]=' ';
							line[j]=' ';
							break;
						}
					}
				}
				if (f1!=0)
					line[i]='$';
			}
		}
		cout << copy << endl;
		for (i=0;i<strlen(line);i++)
	    {
			if (line[i]=='$'||line[i]=='?') cout << line[i];
			else cout << " ";
		}
		cout << endl;
		memset(line, 0, sizeof(line));
		memset(copy, 0, sizeof(copy));
	}
	return 0;
}	
