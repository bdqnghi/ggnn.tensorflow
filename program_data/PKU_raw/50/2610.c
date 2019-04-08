int main()
{
	int w, k;
	int l;
	cin >> w;//???31???? w - 1?????
	switch(w)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7: k = w - 1;break;
		case 1: k = 7;break;
		default: break;
	}
	

	l = 13 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'1' <<endl; 

	l = 44 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'2' <<endl; 

	l = 72 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'3' <<endl; 

	l = 103 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'4' <<endl;

	l = 133 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'5' <<endl;

	l = 164 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'6' <<endl;

	l = 194 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'7' <<endl;

	l = 225 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'8' <<endl;

	l = 256 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<'9' <<endl;

	l = 286 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<"10" <<endl;

	l = 317 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<"11" <<endl;

	l = 347 % 7 + k;
	if(l > 7)l = l - 7;
	if(l == 5)cout <<"12"<<endl;

	return 0; 
}