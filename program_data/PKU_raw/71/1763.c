void main()
{
	int n, i, j, a[200], b[200], c[200], d; 
	int totalb = 0, totalc = 0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d%d", &a[i], &b[i], &c[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<b[i];j++){
			if((j == 1) || (j == 3) || (j == 5) || (j == 7) || (j == 8) || (j == 10) || (j == 12))
				totalb+=31;
			else if((j == 4) || (j == 6) || (j == 9) || (j == 11))
				totalb+=30;
			else{
				if(((a[i]%4==0) && (a[i]%100!=0)) || (a[i]%400==0))
					totalb+=29;
				else
					totalb+=28;
			}
		}
		for(j=1;j<c[i];j++){
			if((j == 1) || (j == 3) || (j == 5) || (j == 7) || (j == 8) || (j == 10) || (j == 12))
				totalc+=31;
			else if((j == 4) || (j == 6) || (j == 9) || (j == 11))
				totalc+=30;
			else{
				if(((a[i]%4==0) && (a[i]%100!=0)) || (a[i]%400==0))
					totalc+=29;
				else
					totalc+=28;
			}
		}
		d=fabs(totalb-totalc);
		if(d%7==0)
			printf("YES\n");
		else
			printf("NO\n");
		totalb = totalc = 0;
	}
}


