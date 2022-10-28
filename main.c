/* Kelvin to RGB conversion table */

#include <stdio.h>
#include <math.h>

#define MIN 	1000
#define MAX 	10000
#define STEP	50

main() {
	int k;
	double t;
	double r, g, b;

	for (k = MIN; k <= MAX; k = k + STEP) {
		t = k;
		t = t / 100.0;

		if (t <= 66) {
			r = 255;
			g = t;
			g = 99.4708025861 * log(g) - 161.1195681661;
			if (g < 0)
				g = 0;
			if (g > 255)
				g = 255;
		}
		else {
			r = t - 60;
			r = 329.698727446 * pow(r,-0.1332047592);
			if (r < 0)
				r = 0;
			if (r > 255)
				r = 255;
			g = t - 60;
			g = 288.1221695283 * pow(g,-0.0755148492);
			if (g < 0)
				g = 0;
			if (g > 255)
				g = 255;
		}
		if (t >= 66)
			b = 255;
		else {
			if (t <= 19)
				b = 0;
			else {
				b = t - 10;
				b = 138.5177312231 * log(b) - 305.0447927307;
				if (b < 0)
					b = 0;
				if (b > 255)
					b = 255;
			}
		}
		printf("%dk = R%10f | G%10f | B%10f\n", k, r, g, b);
	}
	return 0;
}
