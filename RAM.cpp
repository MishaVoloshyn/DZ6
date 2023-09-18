#include <iostream>
#include <cstring>
#include "RAM.h"

#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

RAM::RAM() : ram_model(nullptr), ram_price(0) {}


void RAM::SetMo(const char* mo) {

	this->ram_model = new char[strlen(mo) + 1];
	strcpy_s(ram_model, strlen(mo) + 1, mo);
}
char* RAM::GetMo()
{
	return this->ram_model;
}
void RAM::SetPr(double pr) {

	this->ram_price = pr;
}
double RAM::GetPr()
{
	return this->ram_price;
}
RAM::~RAM() {
	delete[] ram_model;
}
