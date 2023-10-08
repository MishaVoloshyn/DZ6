#pragma once
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "GPU.h"
using namespace std;
#include <iostream>
#include <string>

class Mouse {
private:
	string weight;
	string brand;
public:
	Mouse() {
		weight = " 0 gr";
		brand = " noname";
	}
	Mouse(string w, string b) {
		weight = w;
		brand =  b;
	}
	void ShowConsole() {
		cout << "Mouse" << endl;
		cout << "weight: " << weight << endl;
		cout << "brand: " << brand << endl;
	}
};
 
class Kabel {
private:
	string speed;
	string metr;
public:
	Kabel() {
		speed = " 5 gb/s";
		metr = " 1 metr";
	}
	Kabel(string s, string m) {
		speed = s;
		metr = m;
	}
	void ShowConsole() {
		cout << "Mouse" << endl;
		cout << "speed: " << speed << endl;
		cout << "metr: " << metr << endl;
	}
};



class Laptop {
private:
	double price;
	char* name;
	char* color;
	char* charust;
	CPU cpu;
	SSD ssd;
	RAM ram;
	GPU gpu;
	Mouse* mouse;
	Kabel* kabel;
public:
	static int count;
	Laptop();
	Laptop(const char* n);
	Laptop(const char* n, const char* c);
	Laptop(const char* n, const char* c, const char* u );
	Laptop(const char* n, const char* c, const char* u, double finalprice);
	Laptop(const char* name, const char* color, const char* charust, const char* cpu_model, double cpu_price, const char* gpu_model, double gpu_price, const char* ssd_model, double ssd_price, const char* ram_model, double ram_price, Mouse* m, Kabel* k);
	Laptop(const Laptop& laptop);

	void SetColor(const char* c);

	void ShowFinLaptop();
	char* GetColor();
	~Laptop();
};