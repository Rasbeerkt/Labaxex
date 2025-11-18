#include <stdio.h>
int isLeapYear(int year) {
	if (year % 400 == 0)
		return 1;
	if (year % 100 == 0)
		return 0;
	if (year % 4 == 0)
		return 1;
	return 0;

}
int main() {
	int num;
	int b;
	scanf_s("%d", &num);
	scanf_s("%d", &b);
	do {
		if (isLeapYear(num))
			printf("%d\t", num);
		num++;
	} while (num <= b);
}
int main() {
	int num;
	scanf_s("%d", &num);
	if (num%2==0) printf("Chet")
}

//#include <stdio.h>
//	int isPrime(int chis) {
//		int sum = 0;
//		int h = 1;
//		do {
//			if (chis % h == 0)
//				sum++;
//				h++;
//		} while (chis >=h);
//		if (sum == 2)
//			return 1;
//		if (sum != 2)
//			return 0;
//	}
//int main() {
//	int a, b;
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	do {
//		if (isPrime(a))
//			printf("%d\n", a);
//		a++;
//	} while (a <= b);
//}


//#include <stdio.h>
//int issum(int chis) {
//	int sum = 0;
//	do {
//		sum = sum + chis % 10;
//		chis= chis / 10;
//
//	} while (chis > 0);
//	return sum;
//}
//int main() {
//	int a, b;
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	do {
//		int z = issum(a);
//		printf("Suma sifer(%d) = %d \n", a, z);
//		a++;
//	} while (a <= b);
//}


//#include <stdio.h>
//int ticket(int sped) {
//	if (sped < 20)
//		return 30;
//	if (sped >= 21 && sped <= 25)
//		return 50;
//	if (sped >= 26 && sped <= 30)
//		return 56;
//	if (sped >= 31 && sped <= 40)
//		return 140;
//	if (sped >= 41 && sped <= 50)
//		return 150;
//	if (sped >= 50)
//		return 2180;
//}
//int main() {
//	int a;
//	scanf_s("%d", &a);
//	int z = ticket(a);
//	printf("Vash ticker = %d\n", z);
//}


//#include <stdio.h>
//int pros(int price) {
//	int z;
//	int c;
//	z = price / 1000;
//	c = price - 100 * z;
//	return c;
//}
//int main() {
//	int a;
//	int n;
//	scanf_s("%d", &a);
//	n = pros(a);
//	printf("Ur price with discount = %d", n);
//} 
// 
//https://otvet.mail.ru/question/231544709

//
//#include <stdio.h>
//int ndfl(int suma) {
//	if (suma <= 7900)
//		return suma*0.25;
//	if (suma > 7900 && suma < 11240)
//		return suma*0.3;
//	if (suma >= 11240 && suma < 18730)
//		return suma *0.4;
//	if (suma >= 18730 && suma < 34330)
//		return suma * 0.45;
//	if (suma >= 34330)
//		return suma * 0.5;
//}
//int main() {
//	int a;
//	scanf_s("%d", &a);
//	int z = ndfl(a);
//	printf("Vash nalog = %d\n", z);
//}