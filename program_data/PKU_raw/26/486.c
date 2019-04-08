int main (){


	char a[101];
	cin.getline(a,101);
	int i,j;
	for(i=0;i<100;i++)

		if(a[i]==' ')
		{

			for(j=0;;j++)
				if(a[j+i+1]!=' ')
					break;
			for(int k=i+1;k<100;k++)
				a[k]=a[k+j];




		}


	cout<<a<<endl;








	return 0;
}
