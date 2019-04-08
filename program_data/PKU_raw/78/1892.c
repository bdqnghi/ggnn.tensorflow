int a[4],b[6];
const char c[4]={'z','q','s','l'};
int main() {
	int i = 1, j = 1, k = 1, m = 1;  //????
	int z, q, s, l, sum1, sum2, sum3;//????
	for (i = 1; i <= 5; i++) //???????
		for (j = 1; j <= 5; j++)
			for (k = 1; k <= 5; k++)
				for (m = 1; m <= 5; m++)
					if (i != j && i != m && i != k && j != k && j != m && m
							!= k) {   //???????????
						a[0]= z = 10 * i; //????
						a[1]= q = 10 * j;//????
						a[2]= s = 10 * k;//????
						a[3]= l = 10 * m;//????
						sum1 = ((z + q) == (s + l));
						sum2 = ((z + l) > (s + q));
						sum3 = ((z + s) < q);
						if (sum1 == 1 && sum2 == 1 && sum3 == 1) { //???????????
							memset(b,-1,sizeof(b));
							for(int l=0;l<4;l++)
							{
								b[a[l]]=l;
							}
							for(int l=5;l>0;l--)
							{
								if (b[l]>-1)
								{
									cout<<c[b[l]]<<' '<<l*10<<endl;
								}
							}
							if (q > l) {//??????
								if (z > s)//?????????

								{
									cout << "q" << " " << q << endl;
									cout << "l" << " " << l << endl;
									cout << "z" << " " << z << endl;
									cout << "s" << " " << s << endl;
								} else {                 //?????????
									cout << "q" << " " << q << endl;
									cout << "l" << " " << l << endl;
									cout << "s" << " " << s << endl;
									cout << "z" << " " << z << endl;
								}
							}

							if (q < l) {   //??????
								if (z > s) {//?????????
								}
								cout << "l" << " " << l << endl;
								cout << "q" << " " << q << endl;
								cout << "z" << " " << z << endl;
								cout << "s" << " " << s << endl;
							} else {//?????????
								cout << "l" << " " << l << endl;
								cout << "q" << " " << q << endl;
								cout << "s" << " " << s << endl;
								cout << "z" << " " << z << endl;
							}
						}
					}
	return 0;
}
