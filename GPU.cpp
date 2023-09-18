#include <iostream>
#include <cstring>
#include "GPU.h"

#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

GPU::GPU() : gpu_model(nullptr), gpu_price(0) {}


void GPU::SetMo(const char* mo) {

	this->gpu_model = new char[strlen(mo) + 1];
	strcpy_s(gpu_model, strlen(mo) + 1, mo);
}
char* GPU::GetMo()
{
	return this->gpu_model;
}
void GPU::SetPr(double pr) {

	this->gpu_price = pr;
}
double GPU::GetPr()
{
	return this->gpu_price;
}
GPU::~GPU() {
	delete[] gpu_model;
}
