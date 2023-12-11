#include "taylor_math.h"

double taylor_exp(double x, unsigned int members_count) {
	double res;
	double member;
	unsigned int i;

	res = 0.0;
	member = 1.0;

	for (i = 1; i <= members_count; i++) {
		res += member;

		member *= (x / i);
	}

	return res;
}

double taylor_sin(double x, unsigned int members_count) {
	double res;
	double member;
	unsigned int i;

	res = 0.0;
	member = x;

	for (i = 1; i <= members_count; i++) {
		res += member;

		member *= -(x * x) / ((2*i) * (2*i + 1));
	}

	return res;
}

double taylor_cos(double x, unsigned int members_count) {
	double res;
	double member;
	unsigned int i;

	res = 0.0;
	member = 1.0;

	for (i = 1; i <= members_count; i++) {
		res += member;

		member *= -(x * x) / ((2 * i) * (2 * i - 1));
	}

	return res;
}

double taylor_arcsin(double x, unsigned int members_count) {
	// TODO:!
}

double taylor_arccos(double x, unsigned int members_count) {
	double res;
	double member;
	unsigned int i;

	res = 0.0;
	member = 
}