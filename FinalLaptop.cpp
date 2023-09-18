#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "FinalLaptop.h"
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "GPU.h"
#include <iostream>
using namespace std;

double FinalPrice = 0;
int LaptopFin::count = 0;

//initializer
LaptopFin::LaptopFin() :name(nullptr), color(nullptr), charust(nullptr), price(0) {
}


double LaptopFin::GetPr()
{
	return this->price;
}

char* LaptopFin::GetName()
{
	return this->name;
}

char* LaptopFin::GetColor()
{
	return this->color;
}
char* LaptopFin::GetCharUst()
{
	return this->charust;
}
void LaptopFin::ShowFinLaptop()
{
	cout << "Your Finallaptop: " << endl;
	cout << "Name: " << this->name << endl;
	cout << "Color: " << this->color << endl;
	cout << "UstChar: " << this->charust << endl;
	cout << "\nCPU:  model: " << cpu.GetMo() << " price: " << cpu.GetPr() << endl;
	cout << "\nSSD:  model: " << ssd.GetMo() << " price: " << ssd.GetPr() << endl;
	cout << "\nGPU:  model: " << gpu.GetMo() << " price: " << gpu.GetPr() << endl;
	cout << "\nRAM:  model: " << ram.GetMo() << " price: " << ram.GetPr() << endl;
	cout << "Price: " << this->price << "₴" << endl;
	cout << "Amount: " << this->count << endl;

}


LaptopFin::LaptopFin(const char* n) {
	this->name = nullptr;
}
LaptopFin::LaptopFin(const char* n, const char* c) :LaptopFin(n) {
	this->color = nullptr;
}
LaptopFin::LaptopFin(const char* n, const char* c, const char* u ) :LaptopFin(n, c) {
	this->charust = nullptr;
}
LaptopFin::LaptopFin(const char* n, const char* c, const char* u , double finalprice) :LaptopFin(n, c, u) {
	this->price = 0;
}




GPU::GPU(const char* m, double p) {
	gpu_price = p;
	FinalPrice += p;
	gpu_model = new char[strlen(m) + 1];
	strcpy_s(gpu_model, strlen(m) + 1, m);
}

SSD::SSD(const char* m, double p) {
	ssd_price = p;
	FinalPrice += p;
	ssd_model = new char[strlen(m) + 1];
	strcpy_s(ssd_model, strlen(m) + 1, m);
}

CPU::CPU(const char* m, double p) {

	cpu_model = new char[strlen(m) + 1];
	strcpy_s(cpu_model, strlen(m) + 1, m);
	cpu_price = p;
	FinalPrice += p;
}
RAM::RAM(const char* m, double p) {
	ram_price = p;
	FinalPrice += p;
	ram_model = new char[strlen(m) + 1];
	strcpy_s(ram_model, strlen(m) + 1, m);
}

LaptopFin::LaptopFin(const char* name, const char* color, const char* charust, const char* cpu_model, double cpu_price, const char* gpu_model, double gpu_price, const char* ssd_model, double ssd_price, const char* ram_model, double ram_price) : cpu(cpu_model, cpu_price), gpu(gpu_model, gpu_price), ssd(ssd_model, ssd_price), ram(ram_model, ram_price)
{

	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = FinalPrice;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	this->charust = new char[strlen(charust) + 1];
	strcpy_s(this->charust, strlen(charust) + 1, charust);
	count++ ;

};


LaptopFin::~LaptopFin()		
{
	delete[] this->name;
	delete[] this->color;
	delete[] this->charust;
	--count;
}