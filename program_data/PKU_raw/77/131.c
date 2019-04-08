int main()
{
	char line[100], boy, girl;
	int i, j, l, k=0, m, n=0, numb[100]={0}, numg[100]={0};
	scanf("%s", line);
	l = strlen(line);
	boy = line[0];
	for(i=0;i<l;i++)
		if(line[i]!=boy){
			girl = line[i];
			break;
		}
    for(i=0;i<l;i++)
		for(j=i;j<l;j++){
			if(line[i]==boy&&line[j]==girl){
				for(m=i+1;m<j;m++)
					if(line[m]!='0')
						n++;
				if(n==0){
				    numb[k] = i;
				    numg[k] = j;
				    k++;
				    line[i] = '0';
				    line[j] = '0';
				    if(line[0]!='0')
			            i=0;
				}
				n=0;
			}
		}
	for(i=0;numg[i]!=0;i++)
		printf("%d %d\n", numb[i], numg[i]);
	return 0;
}