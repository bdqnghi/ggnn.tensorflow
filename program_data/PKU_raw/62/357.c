int main()
{
	char old[200],wri[200];
	int a,b;
	gets(old);
	b=0;
	for(a=0;old[a]!='\0';a++)
	{
		if(old[a]!=' '){
			wri[b]=old[a];
			b++;
		}
		else{
			if(old[a+1]!=' ')
			{
				wri[b]=old[a];
				wri[b+1]=old[a+1];
				b=b+2;
				a++;
			}
			else	
				continue;
		}
	}
	wri[b]='\0';
	puts(wri);
	return 0;
}
