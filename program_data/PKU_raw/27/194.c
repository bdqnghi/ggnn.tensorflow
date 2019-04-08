
int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		double a, b, c;
		scanf("%lf%lf%lf", &a, &b, &c);
		double delta = b*b - 4*a*c;

		double x1, x2;
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			if (x1 == 0.0)
				x1 = 0.0;
			if (x2 == 0.0)
				x2 = 0.0;

			printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
		}
		else if (delta == 0) {
			x1 = -b / (2*a);
			if (x1 == 0.0)
				x1 = 0.0;
			printf("x1=x2=%.5lf\n", x1);
		}
		else {
			double real, imag;
			real = -b / (2*a);
			if (real == 0.0)
				real = 0.0;
			imag = sqrt(-delta) / (2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", real, imag, real, imag);
		}
	}
}
