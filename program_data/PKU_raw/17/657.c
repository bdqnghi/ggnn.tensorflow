int work(int);
char l='(',r=')',sen[110][110]={0},rem[110][110]={0};
int i,j,k,t=1,nsen[110]={0};
int main()
{
	for(i=0;;i++)
	{ 
		//cin.getline(sen[i],110);
		j = 0;
		char c;
		while((c = cin.get())!='\n')
			sen[i][j++] = c;
		for(j=0;sen[i][j]!=0;j++)
			nsen[i]++;
		for(t=0;t<nsen[i];t++)
			rem[i][t]=sen[i][t];
		work(i);
		cout<<rem[i]<<endl;
		cout<<sen[i]<<endl;
	}


		
	return 0;
}

int work(int i)
{
	for(j=1;j<=nsen[i]-1;j++)//??????
		for(k=0;k<nsen[i]-1;k++)
			if(sen[i][k]==l && sen[i][k+j]==r)
			{sen[i][k]=' ';sen[i][k+j]=' ';}//?????????????

			for(k=0;k<=nsen[i]-1;k++)
				if(sen[i][k]==l)sen[i][k]='$';
				else if(sen[i][k]==r)sen[i][k]='?';//?????????
				else sen[i][k]=' ';//?????????

				k=0;j=1;
				return 0;

}



