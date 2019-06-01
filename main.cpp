#include <string>
#include <iostream>
#include <thread>
#include <windows.h>

#define ever (;;)

using namespace std;

void task1() { // Oddzielajacy rdzen na ktorym dziala program z pythona
    for ever{
		cout << "Drugi rdzen\n";
		Sleep(1100);
	}
}

void task2() { // Oddzielajacy rdzen na ktorym dziala program z pythona
    for ever{
		cout << "Trzeci rdzen\n";
		Sleep(1200);
	}
}

void task3() { // Oddzielajacy rdzen na ktorym dziala program z pythona
    for ever{
		cout << "Czwarty rdzen\n";
		Sleep(1300);
	}
}

int main (int argc, char ** argv) {
    thread thread_1 = thread(task1); // stworzenie rdzeni
	thread thread_2 = thread(task2);
	thread thread_3 = thread(task3);
	
	// main - pierwszy rdzen
	// thread_1 - drugi rdzen
	// itd.
	
    for ever{
		cout << "Pierwszy rdzen\n";
		Sleep(1000);
	}
	
	thread_1.join(); // wlaczenie rdzeni
	thread_2.join();
	thread_3.join();
    return 0;
}

/*
		jeden rdzen korzysta z main
		drugi rdzen korzysta z funkcji, tutaj z programu python
		
		tworzymy jeden rdzen jako dodatkowy, bo main jest pierwszym rdzeniem a drugi
		dopiero implementujemy
*/
