#pragma once
class CPU
{
private:
	char* cpu_model;
	double cpu_price;
public:
	CPU();

	CPU(const char* mo, double pr);

	void SetMo(const char* mo);
	void SetPr(double pr);

	char* GetMo();
	double GetPr();

	CPU(const CPU& laptop);

	~CPU();
	 
};