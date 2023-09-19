#pragma once
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "GPU.h"
 
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
public:
	static int count;
	Laptop();
	Laptop(const char* n);
	Laptop(const char* n, const char* c);
	Laptop(const char* n, const char* c, const char* u );
	Laptop(const char* n, const char* c, const char* u, double finalprice);
	Laptop(const char* name, const char* color, const char* charust, const char* cpu_model, double cpu_price, const char* gpu_model, double gpu_price, const char* ssd_model, double ssd_price, const char* ram_model, double ram_price);
	Laptop(const Laptop& laptop);

	void SetColor(const char* c);

	void ShowFinLaptop();
	char* GetColor();
	~Laptop();
};