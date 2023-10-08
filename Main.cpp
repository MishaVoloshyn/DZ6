#include "FinalLaptop.h"
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "GPU.h"
#include <iostream>
#include <fstream>
using namespace std;



int main() {
	Mouse mouse("100gr", "MSI");
	Kabel kabel("20gb/s", "2m");
	Laptop LaptopFin("MSI", "Katana-Black", "Very Good", "Ryzen 5", 333, "Rtx 3050ti", 777, "SSD512", 111, "4DDR-SDRAM", 111, &mouse, &kabel );
	LaptopFin.ShowFinLaptop();



}