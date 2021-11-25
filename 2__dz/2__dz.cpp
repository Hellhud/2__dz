#include <iostream>

int main(){
	int a[10];
	for (int i = 0; i < 10; i++) {
		std::cin >>a[i];
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] == 0) a[i] = 1;
		else a[i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		std::cout << a[i] << " ";
	}
}