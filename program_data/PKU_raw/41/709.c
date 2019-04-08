void pan(int r[5])
{
	int p[5],t[5],i;
	p[0]=(r[0]==4);
	p[1]=(r[1]==1);
	p[2]=(r[4]==0);
	p[3]=(r[0]!=2);
	p[4]=(r[0]==3);
	if(p[r[0]]==1&&p[r[1]]==1&&p[r[2]]==0&&p[r[3]]==0&&p[r[4]]==0&&r[1]!=4&&r[2]!=4)
	{
		for(i=0;i<5;i++)
		t[r[i]]=i+1;
		printf("%d",t[0]);
		for(i=1;i<5;i++)
		printf(" %d",t[i]);
	}
}
int main()
{
	int r[5];
	for(r[0]=0;r[0]<5;r[0]++)
	for(r[1]=0;r[1]<5;r[1]++)
	if(r[1]==r[0]) continue;
	else
	for(r[2]=0;r[2]<5;r[2]++)
	if(r[2]==r[1]||r[2]==r[0]) continue;
	else
	for(r[3]=0;r[3]<5;r[3]++)
	{
	if(r[3]==r[2]||r[3]==r[1]||r[3]==r[0]) continue;
	else
	r[4]=10-r[0]-r[1]-r[2]-r[3];
	pan(r);
}
}