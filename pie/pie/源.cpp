#include <iostream>
#include"pie.h"
#include"applepie.h"
#include"apricotpie.h"
#include"raspberrypie.h"

int main() {
	int choice = 0;
	printf("What type of pie would you like?(Apple=1,Apricot=2,Raspberry=3)");
	scanf("%d", &choice);
	pie* piePtr = nullptr;

	if (choice == 1) {
		piePtr = new ApplePie();
	}
	else if (choice == 2) {
		piePtr = new ApricotPie();
	}
	else {
		piePtr = new RaspberryPie();
	}

	printf("Description: ", piePtr->description());
	printf("Tastiness: ", piePtr->tastiness());

	return 0;
}