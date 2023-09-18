#include <iostream>
#include <cstring>
#include "SSD.h"

#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

SSD::SSD() : ssd_model(nullptr), ssd_price(0) {}


void SSD::SetMo(const char* mo) {

	this->ssd_model = new char[strlen(mo) + 1];
	strcpy_s(ssd_model, strlen(mo) + 1, mo);
}
char* SSD::GetMo()
{
	return this->ssd_model; 
}
void SSD::SetPr(double pr) {

	this->ssd_price = pr;
}
double SSD::GetPr()
{
	return this->ssd_price;
}
SSD::~SSD() {
	delete[] ssd_model;
}
