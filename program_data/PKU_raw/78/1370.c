

int main()
{
	int z, q, s, l, t, i;
	char name[6];
	for (z = 10; z <= 50; z = z + 10)
	{
		for (q = 10; q <= 50; q = q + 10)
		{
			if (q == z) continue;
        	for (s = 10; s <= 50; s = s + 10)
			{
				if(s == q || s == z) continue;
				for (l = 10; l <= 50; l = l + 10)
				{
					if(l == z || l == q || l == s) continue;
					t = 0;
					t = (z + q == s + l) && (z + l > s + q) && (z + s < q);
					if (t == 1) break;
				}
            	if (t == 1) break;
			}
         	if (t == 1) break;
		}
        if (t == 1) break;
	}	
	for(i = 1; i <= 5; i ++)
		name[i] = ' ';
	name[z / 10] = 'z';
	name[q / 10] = 'q';
	name[s / 10] = 's';
	name[l / 10] = 'l';
    for(i = 5; i >= 1; i --)
		if(name[i] != ' ')
			cout << name[i] << ' ' << i * 10 <<endl;
	 
}
