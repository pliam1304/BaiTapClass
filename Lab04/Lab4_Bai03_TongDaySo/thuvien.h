#pragma once
//Dinh nghia cac ham
double TinhTongR(unsigned int n) {
	double sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}

	return sum;
}

double TinhTongS(unsigned int n) {
	double sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += (i + 1.0) / (i * i);
	}

	return sum;
}

double TinhTongT(unsigned int n) {
	double sum = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i / (i + 1.0);
		}
		else {
			sum -= i / (i + 1.0);
		}
	}

	return sum;
}