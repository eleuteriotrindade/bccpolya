double raizq(double)
int int main(void)
{
	double n;
	scanf("%lf", &n);
	printf("%.2f\n",raizq(n));
}
double raizq(double n)
{
	int x;
	double result = n;
	for (int x = 0; x < 10; ++x)
	{
		result = result / 2 + n / (2*result);
		return(result);
	}
}