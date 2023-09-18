#pragma once
class SSD
{
private:
	char* ssd_model;
	double ssd_price;
public:
	SSD();

	SSD(const char* mo, double pr);

	void SetMo(const char* mo);
	void SetPr(double pr);

	char* GetMo();
	double GetPr();

	~SSD();

};