#pragma once
class RAM
{
private:
	char* ram_model;
	double ram_price;
public:
	RAM();

	RAM(const char* mo, double pr);

	void SetMo(const char* mo);
	void SetPr(double pr);

	char* GetMo();
	double GetPr();

	~RAM();
	 
};

