#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
#include <conio.h>
#include <stddef.h>

using namespace std;

int main() 
{
    //Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char a;
    cin >> a;
    if(isupper(a))
    {
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else if(islower(a))
    {
        cout << "ALPHA" << endl << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT";
    }
    return 0;
}