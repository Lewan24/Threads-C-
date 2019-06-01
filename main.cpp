#include <string>
#include <iostream>
#include <thread>
#include <windows.h>

#define ever (;;)

using namespace std;

void task1() { // Oddzielajacy rdzen na ktorym dziala program z pythona
    system("D:/Programy/Python_3.7.1/python.exe test.py");
}

int main (int argc, char ** argv) {
    thread thread_1 = thread(task1); // stworzenie rdzeni
	
	// main - pierwszy rdzen
	// thread_1 - drugi rdzen
	// itd.
	
    for ever{
		cout << "Pierwszy rdzen\n";
		Sleep(1000);
	}
	
	thread_1.join(); // wlaczenie rdzeni
	
    return 0;
}

/*
		jeden rdzen korzysta z main
		drugi rdzen korzysta z funkcji, tutaj z programu python
		
		tworzymy jeden rdzen jako dodatkowy, bo main jest pierwszym rdzeniem a drugi
		dopiero implementujemy
*/
