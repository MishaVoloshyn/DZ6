#pragma once
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "GPU.h"
 
class LaptopFin {
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
	LaptopFin();
	LaptopFin(const char* n);
	LaptopFin(const char* n, const char* c);
	LaptopFin(const char* n, const char* c, const char* u );
	LaptopFin(const char* n, const char* c, const char* u, double finalprice);
	LaptopFin(const char* name, const char* color, const char* charust, const char* cpu_model, double cpu_price, const char* gpu_model, double gpu_price, const char* ssd_model, double ssd_price, const char* ram_model, double ram_price);


	void ShowFinLaptop();
	double GetPr();
	char* GetName();
	char* GetColor();
	char* GetCharUst();
	~LaptopFin();
};