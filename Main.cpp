#include "FinalLaptop.h"
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "GPU.h"
#include <iostream>
#include <fstream>
using namespace std;



int main() {

	Laptop LaptopFin("MSI", "Katana-Black", "Very Good", "Ryzen 5", 333, "Rtx 3050ti", 777, "SSD512", 111, "4DDR-SDRAM", 111);
	LaptopFin.ShowFinLaptop();


	Laptop laptopCop;
	laptopCop = LaptopFin;
	laptopCop.SetColor("white");
	laptopCop.ShowFinLaptop();

}