int main ()
{
	int y,m,d,n[13],i,sum=0;
	n[1]=n[3]=n[5]=n[7]=n[8]=n[10]=n[12]=31;n[0]=n[2]=0; //?????
	n[4]=n[6]=n[9]=n[11]=30;
	cin >> y >> m >> d;
	if((y%4==0&&y%100!=0)||(y%100==0&&y%400==0))         //???????29????28??
		n[2]=29;
	else
		n[2]=28;
	for(i=1;i<m;i++)                                     //?????
		sum=sum+n[i];
	sum=sum+d;
	cout << sum << endl;                                 //???
	return 0;
}
	