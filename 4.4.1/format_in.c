#include "stdio.h"
#include "math.h"

int main()
{
	double mass[1000] = {};
	int N = 0;
	int d_white = 0, m_white = 0, s_white = 0; // degree, minute, second 

	printf ("N = ");
	scanf ("%d", &N);

	printf ("Input position of white maximum: ");
	scanf ("%d %d' %d''", &d_white, &m_white, &s_white);

	for (int i = 0; i < N; i++)
	{
		int d = 0, m = 0, s = 0; // degree, minute, second
		scanf ("%d %d' %d''", &d, &m, &s);
		mass[i] = sin (((d - d_white) + (m - m_white) / 60 + (s - s_white) / 3600) * M_PI / 180);
	}

	for (int i = 0; i < N; i++)
		printf ("%lf\n", mass[i]);
	
	return 0;
}
