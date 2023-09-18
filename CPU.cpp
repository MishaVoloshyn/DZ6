#include <iostream>
#include <cstring>
#include "CPU.h"

#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

CPU::CPU() : cpu_model(nullptr), cpu_price(0) {}


void CPU::SetMo(const char* mo)  {
	
	this-> cpu_model = new char[strlen(mo) + 1];
	strcpy_s(cpu_model, strlen(mo) + 1, mo);
}
char* CPU::GetMo()
{
	return this->cpu_model;
}
void CPU::SetPr(double pr) {

	this->cpu_price = pr;
}
double CPU::GetPr()
{
	return this->cpu_price;
}
CPU::~CPU() {
	delete[] cpu_model;
}
