/*
 * format.cpp
 * 
 * Copyright 2018  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <cmath> 
#include <cstdio>
#include <iomanip> //manipulatory strumieniem wyjscia

using namespace std;



int main(int argc, char **argv)
{
	int li = 7;
    float lf = 10.56;
    
    
    printf("%10.4f\n", M_PI);
    printf("%10.4f\n", lf);
    printf("%10.4f\n", (double)li);
    printf("%10.4d\n", li);
    printf("%10d\n", li);
    printf("Hex: %#x\n", li);
    printf("Oct: %#o\n", li);
    
    cout << endl;
    cout.precision(5);
    cout.width(20);
    cout << lf << endl;
    cout << setprecision(5) << setw(20) << M_PI << endl;
    cout << hex << li << endl;
    cout << oct << li << endl;

    
	return 0;
}

