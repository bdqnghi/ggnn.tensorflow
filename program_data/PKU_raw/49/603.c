int main()
{
  char a[500];
  cin.getline(a,500);
  int i,j,k=1,l;
  l=strlen(a);
  while(k<l)
  {
    
    for(i=0,j=k; j<l; i++,j++)
        {
			int begin=i,end=j;
			while(begin<end)
            {
				if(a[begin]!=a[end]) break;
				else
                {
					begin++;
					end--;
				}
			}
			if(begin>=end)
            {
				int print=i;
				for(print; print<=j; print++)
					cout<<a[print];
				cout<<endl;
			}
		}
    k++;
  }
  cin.get();cin.get();cin.get();
  return 0;
}
