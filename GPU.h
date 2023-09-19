#pragma once
class GPU
{
private:
	char* gpu_model;
	double gpu_price;
public:
	GPU();

	GPU(const char* mo, double pr);

	void SetMo(const char* mo);
	void SetPr(double pr);

	char* GetMo();
	double GetPr();

	GPU(const GPU& laptop);

	~GPU();
	 
};